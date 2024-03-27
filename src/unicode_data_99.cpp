#include "unicode_data/unicode_data.h"

int
unicode_codepoint_exists(
        unicode_codepoint code)
{
    return unicode_codepoint_name(code).data == nullptr ? 0 : 1;
}

unicode_codepoint
unicode_codepoint_toupper(
        unicode_codepoint code)
{
    auto res = unicode_codepoint_upper(code);
    return res == 0 ? code : res;
}

unicode_codepoint
unicode_codepoint_tolower(
        unicode_codepoint code)
{
    auto res = unicode_codepoint_lower(code);
    return res == 0 ? code : res;
}

unicode_codepoint
unicode_codepoint_totitle(
        unicode_codepoint code)
{
    auto res = unicode_codepoint_title(code);
    return res == 0 ? code : res;
}
