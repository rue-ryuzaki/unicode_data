#include "unicode_data/unicode_data.h"

int
unicode_codepoint_exists(
        unicode_codepoint code)
{
    return unicode_codepoint_name(code) == nullptr ? 0 : 1;
}
