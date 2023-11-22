#include "unicode_data.h"

#include <unordered_map>

unicode_Mirror
unicode_codepoint_mirror(
        unicode_codepoint code)
{
    static std::unordered_map<unicode_codepoint, unicode_Mirror> data;
    if (data.empty()) {
        data.insert(std::make_pair(0x0028,unicode_Mirror_Y));
        data.insert(std::make_pair(0x0029,unicode_Mirror_Y));
        data.insert(std::make_pair(0x003c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x003e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x005b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x005d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x007b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x007d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x00ab,unicode_Mirror_Y));
        data.insert(std::make_pair(0x00bb,unicode_Mirror_Y));
        data.insert(std::make_pair(0x0f3a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x0f3b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x0f3c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x0f3d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x169b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x169c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2039,unicode_Mirror_Y));
        data.insert(std::make_pair(0x203a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2045,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2046,unicode_Mirror_Y));
        data.insert(std::make_pair(0x207d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x207e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x208d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x208e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2140,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2201,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2202,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2203,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2204,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2208,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2209,unicode_Mirror_Y));
        data.insert(std::make_pair(0x220a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x220b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x220c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x220d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2211,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2215,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2216,unicode_Mirror_Y));
        data.insert(std::make_pair(0x221a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x221b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x221c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x221d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x221f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2220,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2221,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2222,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2224,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2226,unicode_Mirror_Y));
        data.insert(std::make_pair(0x222b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x222c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x222d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x222e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x222f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2230,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2231,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2232,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2233,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2239,unicode_Mirror_Y));
        data.insert(std::make_pair(0x223b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x223c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x223d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x223e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x223f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2240,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2241,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2242,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2243,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2244,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2245,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2246,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2247,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2248,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2249,unicode_Mirror_Y));
        data.insert(std::make_pair(0x224a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x224b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x224c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2252,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2253,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2254,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2255,unicode_Mirror_Y));
        data.insert(std::make_pair(0x225f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2260,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2262,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2264,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2265,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2266,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2267,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2268,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2269,unicode_Mirror_Y));
        data.insert(std::make_pair(0x226a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x226b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x226e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x226f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2270,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2271,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2272,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2273,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2274,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2275,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2276,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2277,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2278,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2279,unicode_Mirror_Y));
        data.insert(std::make_pair(0x227a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x227b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x227c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x227d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x227e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x227f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2280,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2281,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2282,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2283,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2284,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2285,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2286,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2287,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2288,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2289,unicode_Mirror_Y));
        data.insert(std::make_pair(0x228a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x228b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x228c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x228f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2290,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2291,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2292,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2298,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22a2,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22a3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22a6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22a7,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22a8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22a9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22aa,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22ab,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22ac,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22ad,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22ae,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22af,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22b0,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22b1,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22b2,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22b3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22b4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22b5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22b6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22b7,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22b8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22be,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22bf,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22c9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22ca,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22cb,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22cc,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22cd,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22d0,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22d1,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22d6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22d7,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22d8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22d9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22da,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22db,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22dc,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22dd,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22de,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22df,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22e0,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22e1,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22e2,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22e3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22e4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22e5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22e6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22e7,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22e8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22e9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22ea,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22eb,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22ec,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22ed,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22f0,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22f1,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22f2,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22f3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22f4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22f5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22f6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22f7,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22f8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22f9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22fa,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22fb,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22fc,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22fd,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22fe,unicode_Mirror_Y));
        data.insert(std::make_pair(0x22ff,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2308,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2309,unicode_Mirror_Y));
        data.insert(std::make_pair(0x230a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x230b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2320,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2321,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2329,unicode_Mirror_Y));
        data.insert(std::make_pair(0x232a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2768,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2769,unicode_Mirror_Y));
        data.insert(std::make_pair(0x276a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x276b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x276c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x276d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x276e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x276f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2770,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2771,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2772,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2773,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2774,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2775,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27c0,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27c3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27c4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27c5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27c6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27c8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27c9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27cb,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27cc,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27cd,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27d3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27d4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27d5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27d6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27dc,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27dd,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27de,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27e2,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27e3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27e4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27e5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27e6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27e7,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27e8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27e9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27ea,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27eb,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27ec,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27ed,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27ee,unicode_Mirror_Y));
        data.insert(std::make_pair(0x27ef,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2983,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2984,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2985,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2986,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2987,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2988,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2989,unicode_Mirror_Y));
        data.insert(std::make_pair(0x298a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x298b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x298c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x298d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x298e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x298f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2990,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2991,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2992,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2993,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2994,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2995,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2996,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2997,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2998,unicode_Mirror_Y));
        data.insert(std::make_pair(0x299b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x299c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x299d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x299e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x299f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29a0,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29a2,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29a3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29a4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29a5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29a6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29a7,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29a8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29a9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29aa,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29ab,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29ac,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29ad,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29ae,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29af,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29b8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29c0,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29c1,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29c2,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29c3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29c4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29c5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29c9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29ce,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29cf,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29d0,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29d1,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29d2,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29d4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29d5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29d8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29d9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29da,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29db,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29dc,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29e1,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29e3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29e4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29e5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29e8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29e9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29f4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29f5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29f6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29f7,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29f8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29f9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29fc,unicode_Mirror_Y));
        data.insert(std::make_pair(0x29fd,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a0a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a0b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a0c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a0d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a0e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a0f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a10,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a11,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a12,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a13,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a14,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a15,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a16,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a17,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a18,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a19,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a1a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a1b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a1c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a1e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a1f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a20,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a21,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a24,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a26,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a29,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a2b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a2c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a2d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a2e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a34,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a35,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a3c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a3d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a3e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a57,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a58,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a64,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a65,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a6a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a6b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a6c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a6d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a6f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a70,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a73,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a74,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a79,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a7a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a7b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a7c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a7d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a7e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a7f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a80,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a81,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a82,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a83,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a84,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a85,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a86,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a87,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a88,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a89,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a8a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a8b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a8c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a8d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a8e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a8f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a90,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a91,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a92,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a93,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a94,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a95,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a96,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a97,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a98,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a99,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a9a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a9b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a9c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a9d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a9e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2a9f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aa0,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aa1,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aa2,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aa3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aa6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aa7,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aa8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aa9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aaa,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aab,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aac,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aad,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aaf,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ab0,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ab1,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ab2,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ab3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ab4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ab5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ab6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ab7,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ab8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ab9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aba,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2abb,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2abc,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2abd,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2abe,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2abf,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ac0,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ac1,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ac2,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ac3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ac4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ac5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ac6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ac7,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ac8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ac9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aca,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2acb,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2acc,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2acd,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ace,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2acf,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ad0,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ad1,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ad2,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ad3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ad4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ad5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ad6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2adc,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ade,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ae2,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ae3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ae4,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ae5,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2ae6,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aec,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aed,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2aee,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2af3,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2af7,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2af8,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2af9,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2afa,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2afb,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2afd,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2bfe,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e02,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e03,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e04,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e05,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e09,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e0a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e0c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e0d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e1c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e1d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e20,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e21,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e22,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e23,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e24,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e25,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e26,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e27,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e28,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e29,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e55,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e56,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e57,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e58,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e59,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e5a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e5b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x2e5c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x3008,unicode_Mirror_Y));
        data.insert(std::make_pair(0x3009,unicode_Mirror_Y));
        data.insert(std::make_pair(0x300a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x300b,unicode_Mirror_Y));
        data.insert(std::make_pair(0x300c,unicode_Mirror_Y));
        data.insert(std::make_pair(0x300d,unicode_Mirror_Y));
        data.insert(std::make_pair(0x300e,unicode_Mirror_Y));
        data.insert(std::make_pair(0x300f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x3010,unicode_Mirror_Y));
        data.insert(std::make_pair(0x3011,unicode_Mirror_Y));
        data.insert(std::make_pair(0x3014,unicode_Mirror_Y));
        data.insert(std::make_pair(0x3015,unicode_Mirror_Y));
        data.insert(std::make_pair(0x3016,unicode_Mirror_Y));
        data.insert(std::make_pair(0x3017,unicode_Mirror_Y));
        data.insert(std::make_pair(0x3018,unicode_Mirror_Y));
        data.insert(std::make_pair(0x3019,unicode_Mirror_Y));
        data.insert(std::make_pair(0x301a,unicode_Mirror_Y));
        data.insert(std::make_pair(0x301b,unicode_Mirror_Y));
        data.insert(std::make_pair(0xfe59,unicode_Mirror_Y));
        data.insert(std::make_pair(0xfe5a,unicode_Mirror_Y));
        data.insert(std::make_pair(0xfe5b,unicode_Mirror_Y));
        data.insert(std::make_pair(0xfe5c,unicode_Mirror_Y));
        data.insert(std::make_pair(0xfe5d,unicode_Mirror_Y));
        data.insert(std::make_pair(0xfe5e,unicode_Mirror_Y));
        data.insert(std::make_pair(0xfe64,unicode_Mirror_Y));
        data.insert(std::make_pair(0xfe65,unicode_Mirror_Y));
        data.insert(std::make_pair(0xff08,unicode_Mirror_Y));
        data.insert(std::make_pair(0xff09,unicode_Mirror_Y));
        data.insert(std::make_pair(0xff1c,unicode_Mirror_Y));
        data.insert(std::make_pair(0xff1e,unicode_Mirror_Y));
        data.insert(std::make_pair(0xff3b,unicode_Mirror_Y));
        data.insert(std::make_pair(0xff3d,unicode_Mirror_Y));
        data.insert(std::make_pair(0xff5b,unicode_Mirror_Y));
        data.insert(std::make_pair(0xff5d,unicode_Mirror_Y));
        data.insert(std::make_pair(0xff5f,unicode_Mirror_Y));
        data.insert(std::make_pair(0xff60,unicode_Mirror_Y));
        data.insert(std::make_pair(0xff62,unicode_Mirror_Y));
        data.insert(std::make_pair(0xff63,unicode_Mirror_Y));
        data.insert(std::make_pair(0x1d6db,unicode_Mirror_Y));
        data.insert(std::make_pair(0x1d715,unicode_Mirror_Y));
        data.insert(std::make_pair(0x1d74f,unicode_Mirror_Y));
        data.insert(std::make_pair(0x1d789,unicode_Mirror_Y));
        data.insert(std::make_pair(0x1d7c3,unicode_Mirror_Y));
    }
    auto it = data.find(code);
    return it != data.end() ? (*it).second : unicode_Mirror_N;
}
