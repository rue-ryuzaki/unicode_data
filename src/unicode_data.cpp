#include "unicode_data/unicode_data.h"

unicode_Data
unicode_data(
        unicode_codepoint code)
{
    return unicode_Data{
        code,
        unicode_codepoint_name(code),
        unicode_codepoint_category(code),
        unicode_codepoint_combine(code),
        unicode_codepoint_bidi(code),
        unicode_codepoint_decomposition(code),
        unicode_codepoint_decimal(code),
        unicode_codepoint_digit(code),
        unicode_codepoint_numeric(code),
        unicode_codepoint_mirror(code),
        unicode_codepoint_old_name(code),
        unicode_codepoint_comment(code),
        unicode_codepoint_upper(code),
        unicode_codepoint_lower(code),
        unicode_codepoint_title(code)
    };
}
