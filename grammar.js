module.exports = grammar({
  name: 'docopt',
  extras: $ => [' ', '\t'],
  rules: {
    source_file: $ => seq(
      $.description,
      /[\r\n]{2}/,
      $.usage,
      optional(seq(repeat1($._newline), $.option_descriptions)),
    ),
    _newline: $ => seq(optional('\r'), '\n'),
    description: $ => /.+/,
    usage: $ => seq($._usage_start, repeat($.usage_pattern)),
    usage_pattern: $ => seq($.program_name, repeat(choice($._group_element, $.mutually_exclusive_elements)), $._newline),

    required_group: $ => seq('(', choice($._group_element, $.mutually_exclusive_elements), ')'),
    optional_group: $ => seq('[', choice($._group_element, $.mutually_exclusive_elements), ']'),
    mutually_exclusive_elements: $ => seq($._group_element, repeat1(seq('|', $._group_element))),
  
    _group_element: $ => prec.left(choice(
      $.required_group,
      $.optional_group,
      repeat1($._element),
    )),
    
    program_name: $ => /[a-zA-Z0-9-_]+/,
    _usage_start: $ => seq($._newline, /(usage|Usage|USAGE):/, choice($._newline, token.immediate(' '))),
    command: $ => /[a-z0-9][a-z0-9-_]+/,
    argument: $ => seq(/(<([a-z0-9-_]+)>|[A-Z0-9-_]+)/, optional('...')),
    long_option: $ => prec.left(seq(/--[a-z0-9-_]+/, optional(token.immediate('=')), optional($.argument))),
    short_option: $ => prec.left(seq(/-[a-z0-9]/, optional($.argument))),
    _option: $ => choice($.long_option, $.short_option),
    _element: $ => choice($._option, $.argument, $.command),

    option_descriptions: $ => seq($._option_descriptions_start, repeat($.option_description)),
    _option_descriptions_start: $ => /(options|Options|OPTIONS):/,

    option_description: $ => seq(
      $._newline,
      prec.right(choice(
        seq($.short_option, optional(','), $.long_option),
        $.long_option,
        $.short_option,
      )),
      choice(token.immediate('  '), $._newline),
      optional($.option_informal_description),
    ),

    option_default: $ => /[a-zA-Z0-9\._-]+/,
    _option_default: $ => seq('[default: ', $.option_default, ']'),
    option_informal_description: $ => repeat1(choice($._option_default, /.+/)),
  },
});