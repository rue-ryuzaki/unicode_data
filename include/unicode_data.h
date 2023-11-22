/* SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * C/C++ UnicodeData library
 *
 * Copyright (C) 2023 Golubchikov Mihail <https://github.com/rue-ryuzaki>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _UNICODE_DATA_H_
#define _UNICODE_DATA_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

// -- #undef ------------------------------------------------------------------
// -- version -----------------------------------------------------------------
#undef UNICODE_DATA_VERSION_MAJOR
#undef UNICODE_DATA_VERSION_MINOR
#undef UNICODE_DATA_VERSION_PATCH
#undef UNICODE_DATA_VERSION_TWEAK
#undef UNICODE_DATA_STANDARD_VERSION
#undef UNICODE_DATA_VERSION_NUM
#undef UNICODE_DATA_VERSION_COMPILED
#undef UNICODE_DATA_VERSION_AT_LEAST

// -- #define -----------------------------------------------------------------
// -- version -----------------------------------------------------------------
#define UNICODE_DATA_VERSION_MAJOR 0
#define UNICODE_DATA_VERSION_MINOR 1
#define UNICODE_DATA_VERSION_PATCH 0
#define UNICODE_DATA_STANDARD_VERSION "15.0.0"

/*!
 *  This macro turns the version numbers into a numeric value:
 *  \verbatim
    (1,2,3) -> (10203)
    \endverbatim
 */
#define UNICODE_DATA_VERSION_NUM(X, Y, Z) ((X) * 10000 + (Y) * 100 + (Z))
/*!
 *  This is the version number macro for the current unicode_data version.
 */
#define UNICODE_DATA_VERSION_COMPILED \
    UNICODE_DATA_VERSION_NUM(UNICODE_DATA_VERSION_MAJOR, \
                         UNICODE_DATA_VERSION_MINOR, \
                         UNICODE_DATA_VERSION_PATCH)
/*!
 *  This macro will evaluate to true if compiled with unicode_data
 *  at least X.Y.Z.
 */
#define UNICODE_DATA_VERSION_AT_LEAST(X, Y, Z) \
    (UNICODE_DATA_VERSION_COMPILED >= UNICODE_DATA_VERSION_NUM(X, Y, Z))

// -- types -------------------------------------------------------------------
typedef uint32_t unicode_codepoint;

typedef enum
{
    // Other, Control
    unicode_Category_Cc,
    // Other, Format
    unicode_Category_Cf,
    // Other, Not Assigned (no characters in the file have this property)
    unicode_Category_Cn,
    // Other, Private Use
    unicode_Category_Co,
    // Other, Surrogate
    unicode_Category_Cs,
    // Letter, Cased
    unicode_Category_LC,
    // Letter, Lowercase
    unicode_Category_Ll,
    // Letter, Modifier
    unicode_Category_Lm,
    // Letter, Other
    unicode_Category_Lo,
    // Letter, Titlecase
    unicode_Category_Lt,
    // Letter, Uppercase
    unicode_Category_Lu,
    // Mark, Spacing Combining
    unicode_Category_Mc,
    // Mark, Enclosing
    unicode_Category_Me,
    // Mark, Nonspacing
    unicode_Category_Mn,
    // Number, Decimal Digit
    unicode_Category_Nd,
    // Number, Letter
    unicode_Category_Nl,
    // Number, Other
    unicode_Category_No,
    // Punctuation, Connector
    unicode_Category_Pc,
    // Punctuation, Dash
    unicode_Category_Pd,
    // Punctuation, Close
    unicode_Category_Pe,
    // Punctuation, Final quote (may behave like Ps or Pe depending on usage)
    unicode_Category_Pf,
    // Punctuation, Initial quote (may behave like Ps or Pe depending on usage)
    unicode_Category_Pi,
    // Punctuation, Other
    unicode_Category_Po,
    // Punctuation, Open
    unicode_Category_Ps,
    // Symbol, Currency
    unicode_Category_Sc,
    // Symbol, Modifier
    unicode_Category_Sk,
    // Symbol, Math
    unicode_Category_Sm,
    // Symbol, Other
    unicode_Category_So,
    // Separator, Line
    unicode_Category_Zl,
    // Separator, Paragraph
    unicode_Category_Zp,
    // Separator, Space
    unicode_Category_Zs,
} unicode_Category;

typedef enum
{
    // Right-to-Left Arabic
    unicode_BIDI_AL,
    // Arabic Number
    unicode_BIDI_AN,
    // Paragraph Separator
    unicode_BIDI_B,
    // Boundary Neutral
    unicode_BIDI_BN,
    // Common Number Separator
    unicode_BIDI_CS,
    // European Number
    unicode_BIDI_EN,
    // European Separator
    unicode_BIDI_ES,
    // European Number Terminator
    unicode_BIDI_ET,
    // First Strong Isolate
    unicode_BIDI_FSI,
    // Left-to-Right
    unicode_BIDI_L,
    // Left-to-Right Embedding
    unicode_BIDI_LRE,
    // Left-to-Right Isolate
    unicode_BIDI_LRI,
    // Left-to-Right Override
    unicode_BIDI_LRO,
    // Nonspacing Mark
    unicode_BIDI_NSM,
    // Other Neutrals
    unicode_BIDI_ON,
    // Pop Directional Format
    unicode_BIDI_PDF,
    // Pop Directional Isolate
    unicode_BIDI_PDI,
    // Right-to-Left
    unicode_BIDI_R,
    // Right-to-Left Embedding
    unicode_BIDI_RLE,
    // Right-to-Left Isolate
    unicode_BIDI_RLI,
    // Right-to-Left Override
    unicode_BIDI_RLO,
    // Segment Separator
    unicode_BIDI_S,
    // Whitespace
    unicode_BIDI_WS,
} unicode_BIDI;

typedef enum
{
    // Mirror No
    unicode_Mirror_N,
    // Mirror Yes
    unicode_Mirror_Y,
} unicode_Mirror;

typedef struct
{
    unicode_codepoint code;
    char const* name;
    unicode_Category category;
    uint32_t combine;
    unicode_BIDI bidi;
    char const* decomposition;
    char const* decimal;
    char const* digit;
    char const* numeric;
    unicode_Mirror mirror;
    char const* old_name;
    char const* comment;
    unicode_codepoint upper;
    unicode_codepoint lower;
    unicode_codepoint title;
} unicode_Data;

// -- functions ---------------------------------------------------------------
/*!
 *  \brief Get unicode codepoint data
 *
 *  \param code Unicode codepoint
 *
 *  \return Data for selected codepoint
 */
unicode_Data
unicode_data(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint name
 *
 *  \param code Unicode codepoint
 *
 *  \return Name for selected codepoint if exists, otherwise null
 */
char const*
unicode_codepoint_name(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint category
 *
 *  \param code Unicode codepoint
 *
 *  \return Category for selected codepoint
 */
unicode_Category
unicode_codepoint_category(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint combine
 *
 *  \param code Unicode codepoint
 *
 *  \return Combine for selected codepoint if exists, otherwise 0
 */
uint32_t
unicode_codepoint_combine(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint BIDI
 *
 *  \param code Unicode codepoint
 *
 *  \return BIDI for selected codepoint
 */
unicode_BIDI
unicode_codepoint_bidi(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint decomposition
 *
 *  \param code Unicode codepoint
 *
 *  \return Decomposition for selected codepoint if exists, otherwise null
 */
char const*
unicode_codepoint_decomposition(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint decimal value (Numeric_Type=Decimal)
 *
 *  \param code Unicode codepoint
 *
 *  \return Decimal value for selected codepoint if exists, otherwise null
 */
char const*
unicode_codepoint_decimal(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint digit value (Numeric_Type=Digit)
 *
 *  \param code Unicode codepoint
 *
 *  \return Digit value for selected codepoint if exists, otherwise null
 */
char const*
unicode_codepoint_digit(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint numeric value (Numeric_Type=Numeric)
 *
 *  \param code Unicode codepoint
 *
 *  \return Numeric value for selected codepoint if exists, otherwise null
 */
char const*
unicode_codepoint_numeric(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint mirror (Y or N)
 *
 *  \param code Unicode codepoint
 *
 *  \return Mirror for selected codepoint
 */
unicode_Mirror
unicode_codepoint_mirror(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint old name
 *
 *  \param code Unicode codepoint
 *
 *  \return Old name for selected codepoint if exists, otherwise null
 */
char const*
unicode_codepoint_old_name(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint comment (since 5.2.0 is null)
 *
 *  \param code Unicode codepoint
 *
 *  \return Comment for selected codepoint if exists, otherwise null
 */
char const*
unicode_codepoint_comment(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint upper codepoint
 *
 *  \param code Unicode codepoint
 *
 *  \return Upper codepoint for selected codepoint if exists, otherwise 0
 */
unicode_codepoint
unicode_codepoint_upper(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint lower codepoint
 *
 *  \param code Unicode codepoint
 *
 *  \return Lower codepoint for selected codepoint if exists, otherwise 0
 */
unicode_codepoint
unicode_codepoint_lower(
        unicode_codepoint code);

/*!
 *  \brief Get unicode codepoint title codepoint
 *
 *  \param code Unicode codepoint
 *
 *  \return Title codepoint for selected codepoint if exists, otherwise upper
 */
unicode_codepoint
unicode_codepoint_title(
        unicode_codepoint code);

#ifdef __cplusplus
}
#endif  // __cplusplus

#endif  // _UNICODE_DATA_H_
