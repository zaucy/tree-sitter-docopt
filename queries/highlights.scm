"|" @operator
"[" @punctuation.bracket
"]" @punctuation.bracket
"(" @punctuation.bracket
")" @punctuation.bracket
"," @punctuation
"=" @comment ; the equal sign is optional, let's not highlight it much

; ((usage) @comment)
; ((description) @comment)
; ((option_descriptions) @comment)
((program_name) @namespace)
((command) @function)
((argument) @variable.parameter)
((long_option) @variable.parameter)
((short_option) @variable.parameter)
((option_informal_description) @comment)
