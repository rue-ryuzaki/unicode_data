#include "unicode_data.h"

#include <string>
#include <unordered_map>

char const*
unicode_codepoint_decimal(
        unicode_codepoint code)
{
    static std::unordered_map<unicode_codepoint, std::string> data;
    if (data.empty()) {
        data.insert(std::make_pair(0x0030,"0"));
        data.insert(std::make_pair(0x0031,"1"));
        data.insert(std::make_pair(0x0032,"2"));
        data.insert(std::make_pair(0x0033,"3"));
        data.insert(std::make_pair(0x0034,"4"));
        data.insert(std::make_pair(0x0035,"5"));
        data.insert(std::make_pair(0x0036,"6"));
        data.insert(std::make_pair(0x0037,"7"));
        data.insert(std::make_pair(0x0038,"8"));
        data.insert(std::make_pair(0x0039,"9"));
        data.insert(std::make_pair(0x0660,"0"));
        data.insert(std::make_pair(0x0661,"1"));
        data.insert(std::make_pair(0x0662,"2"));
        data.insert(std::make_pair(0x0663,"3"));
        data.insert(std::make_pair(0x0664,"4"));
        data.insert(std::make_pair(0x0665,"5"));
        data.insert(std::make_pair(0x0666,"6"));
        data.insert(std::make_pair(0x0667,"7"));
        data.insert(std::make_pair(0x0668,"8"));
        data.insert(std::make_pair(0x0669,"9"));
        data.insert(std::make_pair(0x06f0,"0"));
        data.insert(std::make_pair(0x06f1,"1"));
        data.insert(std::make_pair(0x06f2,"2"));
        data.insert(std::make_pair(0x06f3,"3"));
        data.insert(std::make_pair(0x06f4,"4"));
        data.insert(std::make_pair(0x06f5,"5"));
        data.insert(std::make_pair(0x06f6,"6"));
        data.insert(std::make_pair(0x06f7,"7"));
        data.insert(std::make_pair(0x06f8,"8"));
        data.insert(std::make_pair(0x06f9,"9"));
        data.insert(std::make_pair(0x07c0,"0"));
        data.insert(std::make_pair(0x07c1,"1"));
        data.insert(std::make_pair(0x07c2,"2"));
        data.insert(std::make_pair(0x07c3,"3"));
        data.insert(std::make_pair(0x07c4,"4"));
        data.insert(std::make_pair(0x07c5,"5"));
        data.insert(std::make_pair(0x07c6,"6"));
        data.insert(std::make_pair(0x07c7,"7"));
        data.insert(std::make_pair(0x07c8,"8"));
        data.insert(std::make_pair(0x07c9,"9"));
        data.insert(std::make_pair(0x0966,"0"));
        data.insert(std::make_pair(0x0967,"1"));
        data.insert(std::make_pair(0x0968,"2"));
        data.insert(std::make_pair(0x0969,"3"));
        data.insert(std::make_pair(0x096a,"4"));
        data.insert(std::make_pair(0x096b,"5"));
        data.insert(std::make_pair(0x096c,"6"));
        data.insert(std::make_pair(0x096d,"7"));
        data.insert(std::make_pair(0x096e,"8"));
        data.insert(std::make_pair(0x096f,"9"));
        data.insert(std::make_pair(0x09e6,"0"));
        data.insert(std::make_pair(0x09e7,"1"));
        data.insert(std::make_pair(0x09e8,"2"));
        data.insert(std::make_pair(0x09e9,"3"));
        data.insert(std::make_pair(0x09ea,"4"));
        data.insert(std::make_pair(0x09eb,"5"));
        data.insert(std::make_pair(0x09ec,"6"));
        data.insert(std::make_pair(0x09ed,"7"));
        data.insert(std::make_pair(0x09ee,"8"));
        data.insert(std::make_pair(0x09ef,"9"));
        data.insert(std::make_pair(0x0a66,"0"));
        data.insert(std::make_pair(0x0a67,"1"));
        data.insert(std::make_pair(0x0a68,"2"));
        data.insert(std::make_pair(0x0a69,"3"));
        data.insert(std::make_pair(0x0a6a,"4"));
        data.insert(std::make_pair(0x0a6b,"5"));
        data.insert(std::make_pair(0x0a6c,"6"));
        data.insert(std::make_pair(0x0a6d,"7"));
        data.insert(std::make_pair(0x0a6e,"8"));
        data.insert(std::make_pair(0x0a6f,"9"));
        data.insert(std::make_pair(0x0ae6,"0"));
        data.insert(std::make_pair(0x0ae7,"1"));
        data.insert(std::make_pair(0x0ae8,"2"));
        data.insert(std::make_pair(0x0ae9,"3"));
        data.insert(std::make_pair(0x0aea,"4"));
        data.insert(std::make_pair(0x0aeb,"5"));
        data.insert(std::make_pair(0x0aec,"6"));
        data.insert(std::make_pair(0x0aed,"7"));
        data.insert(std::make_pair(0x0aee,"8"));
        data.insert(std::make_pair(0x0aef,"9"));
        data.insert(std::make_pair(0x0b66,"0"));
        data.insert(std::make_pair(0x0b67,"1"));
        data.insert(std::make_pair(0x0b68,"2"));
        data.insert(std::make_pair(0x0b69,"3"));
        data.insert(std::make_pair(0x0b6a,"4"));
        data.insert(std::make_pair(0x0b6b,"5"));
        data.insert(std::make_pair(0x0b6c,"6"));
        data.insert(std::make_pair(0x0b6d,"7"));
        data.insert(std::make_pair(0x0b6e,"8"));
        data.insert(std::make_pair(0x0b6f,"9"));
        data.insert(std::make_pair(0x0be6,"0"));
        data.insert(std::make_pair(0x0be7,"1"));
        data.insert(std::make_pair(0x0be8,"2"));
        data.insert(std::make_pair(0x0be9,"3"));
        data.insert(std::make_pair(0x0bea,"4"));
        data.insert(std::make_pair(0x0beb,"5"));
        data.insert(std::make_pair(0x0bec,"6"));
        data.insert(std::make_pair(0x0bed,"7"));
        data.insert(std::make_pair(0x0bee,"8"));
        data.insert(std::make_pair(0x0bef,"9"));
        data.insert(std::make_pair(0x0c66,"0"));
        data.insert(std::make_pair(0x0c67,"1"));
        data.insert(std::make_pair(0x0c68,"2"));
        data.insert(std::make_pair(0x0c69,"3"));
        data.insert(std::make_pair(0x0c6a,"4"));
        data.insert(std::make_pair(0x0c6b,"5"));
        data.insert(std::make_pair(0x0c6c,"6"));
        data.insert(std::make_pair(0x0c6d,"7"));
        data.insert(std::make_pair(0x0c6e,"8"));
        data.insert(std::make_pair(0x0c6f,"9"));
        data.insert(std::make_pair(0x0ce6,"0"));
        data.insert(std::make_pair(0x0ce7,"1"));
        data.insert(std::make_pair(0x0ce8,"2"));
        data.insert(std::make_pair(0x0ce9,"3"));
        data.insert(std::make_pair(0x0cea,"4"));
        data.insert(std::make_pair(0x0ceb,"5"));
        data.insert(std::make_pair(0x0cec,"6"));
        data.insert(std::make_pair(0x0ced,"7"));
        data.insert(std::make_pair(0x0cee,"8"));
        data.insert(std::make_pair(0x0cef,"9"));
        data.insert(std::make_pair(0x0d66,"0"));
        data.insert(std::make_pair(0x0d67,"1"));
        data.insert(std::make_pair(0x0d68,"2"));
        data.insert(std::make_pair(0x0d69,"3"));
        data.insert(std::make_pair(0x0d6a,"4"));
        data.insert(std::make_pair(0x0d6b,"5"));
        data.insert(std::make_pair(0x0d6c,"6"));
        data.insert(std::make_pair(0x0d6d,"7"));
        data.insert(std::make_pair(0x0d6e,"8"));
        data.insert(std::make_pair(0x0d6f,"9"));
        data.insert(std::make_pair(0x0de6,"0"));
        data.insert(std::make_pair(0x0de7,"1"));
        data.insert(std::make_pair(0x0de8,"2"));
        data.insert(std::make_pair(0x0de9,"3"));
        data.insert(std::make_pair(0x0dea,"4"));
        data.insert(std::make_pair(0x0deb,"5"));
        data.insert(std::make_pair(0x0dec,"6"));
        data.insert(std::make_pair(0x0ded,"7"));
        data.insert(std::make_pair(0x0dee,"8"));
        data.insert(std::make_pair(0x0def,"9"));
        data.insert(std::make_pair(0x0e50,"0"));
        data.insert(std::make_pair(0x0e51,"1"));
        data.insert(std::make_pair(0x0e52,"2"));
        data.insert(std::make_pair(0x0e53,"3"));
        data.insert(std::make_pair(0x0e54,"4"));
        data.insert(std::make_pair(0x0e55,"5"));
        data.insert(std::make_pair(0x0e56,"6"));
        data.insert(std::make_pair(0x0e57,"7"));
        data.insert(std::make_pair(0x0e58,"8"));
        data.insert(std::make_pair(0x0e59,"9"));
        data.insert(std::make_pair(0x0ed0,"0"));
        data.insert(std::make_pair(0x0ed1,"1"));
        data.insert(std::make_pair(0x0ed2,"2"));
        data.insert(std::make_pair(0x0ed3,"3"));
        data.insert(std::make_pair(0x0ed4,"4"));
        data.insert(std::make_pair(0x0ed5,"5"));
        data.insert(std::make_pair(0x0ed6,"6"));
        data.insert(std::make_pair(0x0ed7,"7"));
        data.insert(std::make_pair(0x0ed8,"8"));
        data.insert(std::make_pair(0x0ed9,"9"));
        data.insert(std::make_pair(0x0f20,"0"));
        data.insert(std::make_pair(0x0f21,"1"));
        data.insert(std::make_pair(0x0f22,"2"));
        data.insert(std::make_pair(0x0f23,"3"));
        data.insert(std::make_pair(0x0f24,"4"));
        data.insert(std::make_pair(0x0f25,"5"));
        data.insert(std::make_pair(0x0f26,"6"));
        data.insert(std::make_pair(0x0f27,"7"));
        data.insert(std::make_pair(0x0f28,"8"));
        data.insert(std::make_pair(0x0f29,"9"));
        data.insert(std::make_pair(0x1040,"0"));
        data.insert(std::make_pair(0x1041,"1"));
        data.insert(std::make_pair(0x1042,"2"));
        data.insert(std::make_pair(0x1043,"3"));
        data.insert(std::make_pair(0x1044,"4"));
        data.insert(std::make_pair(0x1045,"5"));
        data.insert(std::make_pair(0x1046,"6"));
        data.insert(std::make_pair(0x1047,"7"));
        data.insert(std::make_pair(0x1048,"8"));
        data.insert(std::make_pair(0x1049,"9"));
        data.insert(std::make_pair(0x1090,"0"));
        data.insert(std::make_pair(0x1091,"1"));
        data.insert(std::make_pair(0x1092,"2"));
        data.insert(std::make_pair(0x1093,"3"));
        data.insert(std::make_pair(0x1094,"4"));
        data.insert(std::make_pair(0x1095,"5"));
        data.insert(std::make_pair(0x1096,"6"));
        data.insert(std::make_pair(0x1097,"7"));
        data.insert(std::make_pair(0x1098,"8"));
        data.insert(std::make_pair(0x1099,"9"));
        data.insert(std::make_pair(0x17e0,"0"));
        data.insert(std::make_pair(0x17e1,"1"));
        data.insert(std::make_pair(0x17e2,"2"));
        data.insert(std::make_pair(0x17e3,"3"));
        data.insert(std::make_pair(0x17e4,"4"));
        data.insert(std::make_pair(0x17e5,"5"));
        data.insert(std::make_pair(0x17e6,"6"));
        data.insert(std::make_pair(0x17e7,"7"));
        data.insert(std::make_pair(0x17e8,"8"));
        data.insert(std::make_pair(0x17e9,"9"));
        data.insert(std::make_pair(0x1810,"0"));
        data.insert(std::make_pair(0x1811,"1"));
        data.insert(std::make_pair(0x1812,"2"));
        data.insert(std::make_pair(0x1813,"3"));
        data.insert(std::make_pair(0x1814,"4"));
        data.insert(std::make_pair(0x1815,"5"));
        data.insert(std::make_pair(0x1816,"6"));
        data.insert(std::make_pair(0x1817,"7"));
        data.insert(std::make_pair(0x1818,"8"));
        data.insert(std::make_pair(0x1819,"9"));
        data.insert(std::make_pair(0x1946,"0"));
        data.insert(std::make_pair(0x1947,"1"));
        data.insert(std::make_pair(0x1948,"2"));
        data.insert(std::make_pair(0x1949,"3"));
        data.insert(std::make_pair(0x194a,"4"));
        data.insert(std::make_pair(0x194b,"5"));
        data.insert(std::make_pair(0x194c,"6"));
        data.insert(std::make_pair(0x194d,"7"));
        data.insert(std::make_pair(0x194e,"8"));
        data.insert(std::make_pair(0x194f,"9"));
        data.insert(std::make_pair(0x19d0,"0"));
        data.insert(std::make_pair(0x19d1,"1"));
        data.insert(std::make_pair(0x19d2,"2"));
        data.insert(std::make_pair(0x19d3,"3"));
        data.insert(std::make_pair(0x19d4,"4"));
        data.insert(std::make_pair(0x19d5,"5"));
        data.insert(std::make_pair(0x19d6,"6"));
        data.insert(std::make_pair(0x19d7,"7"));
        data.insert(std::make_pair(0x19d8,"8"));
        data.insert(std::make_pair(0x19d9,"9"));
        data.insert(std::make_pair(0x1a80,"0"));
        data.insert(std::make_pair(0x1a81,"1"));
        data.insert(std::make_pair(0x1a82,"2"));
        data.insert(std::make_pair(0x1a83,"3"));
        data.insert(std::make_pair(0x1a84,"4"));
        data.insert(std::make_pair(0x1a85,"5"));
        data.insert(std::make_pair(0x1a86,"6"));
        data.insert(std::make_pair(0x1a87,"7"));
        data.insert(std::make_pair(0x1a88,"8"));
        data.insert(std::make_pair(0x1a89,"9"));
        data.insert(std::make_pair(0x1a90,"0"));
        data.insert(std::make_pair(0x1a91,"1"));
        data.insert(std::make_pair(0x1a92,"2"));
        data.insert(std::make_pair(0x1a93,"3"));
        data.insert(std::make_pair(0x1a94,"4"));
        data.insert(std::make_pair(0x1a95,"5"));
        data.insert(std::make_pair(0x1a96,"6"));
        data.insert(std::make_pair(0x1a97,"7"));
        data.insert(std::make_pair(0x1a98,"8"));
        data.insert(std::make_pair(0x1a99,"9"));
        data.insert(std::make_pair(0x1b50,"0"));
        data.insert(std::make_pair(0x1b51,"1"));
        data.insert(std::make_pair(0x1b52,"2"));
        data.insert(std::make_pair(0x1b53,"3"));
        data.insert(std::make_pair(0x1b54,"4"));
        data.insert(std::make_pair(0x1b55,"5"));
        data.insert(std::make_pair(0x1b56,"6"));
        data.insert(std::make_pair(0x1b57,"7"));
        data.insert(std::make_pair(0x1b58,"8"));
        data.insert(std::make_pair(0x1b59,"9"));
        data.insert(std::make_pair(0x1bb0,"0"));
        data.insert(std::make_pair(0x1bb1,"1"));
        data.insert(std::make_pair(0x1bb2,"2"));
        data.insert(std::make_pair(0x1bb3,"3"));
        data.insert(std::make_pair(0x1bb4,"4"));
        data.insert(std::make_pair(0x1bb5,"5"));
        data.insert(std::make_pair(0x1bb6,"6"));
        data.insert(std::make_pair(0x1bb7,"7"));
        data.insert(std::make_pair(0x1bb8,"8"));
        data.insert(std::make_pair(0x1bb9,"9"));
        data.insert(std::make_pair(0x1c40,"0"));
        data.insert(std::make_pair(0x1c41,"1"));
        data.insert(std::make_pair(0x1c42,"2"));
        data.insert(std::make_pair(0x1c43,"3"));
        data.insert(std::make_pair(0x1c44,"4"));
        data.insert(std::make_pair(0x1c45,"5"));
        data.insert(std::make_pair(0x1c46,"6"));
        data.insert(std::make_pair(0x1c47,"7"));
        data.insert(std::make_pair(0x1c48,"8"));
        data.insert(std::make_pair(0x1c49,"9"));
        data.insert(std::make_pair(0x1c50,"0"));
        data.insert(std::make_pair(0x1c51,"1"));
        data.insert(std::make_pair(0x1c52,"2"));
        data.insert(std::make_pair(0x1c53,"3"));
        data.insert(std::make_pair(0x1c54,"4"));
        data.insert(std::make_pair(0x1c55,"5"));
        data.insert(std::make_pair(0x1c56,"6"));
        data.insert(std::make_pair(0x1c57,"7"));
        data.insert(std::make_pair(0x1c58,"8"));
        data.insert(std::make_pair(0x1c59,"9"));
        data.insert(std::make_pair(0xa620,"0"));
        data.insert(std::make_pair(0xa621,"1"));
        data.insert(std::make_pair(0xa622,"2"));
        data.insert(std::make_pair(0xa623,"3"));
        data.insert(std::make_pair(0xa624,"4"));
        data.insert(std::make_pair(0xa625,"5"));
        data.insert(std::make_pair(0xa626,"6"));
        data.insert(std::make_pair(0xa627,"7"));
        data.insert(std::make_pair(0xa628,"8"));
        data.insert(std::make_pair(0xa629,"9"));
        data.insert(std::make_pair(0xa8d0,"0"));
        data.insert(std::make_pair(0xa8d1,"1"));
        data.insert(std::make_pair(0xa8d2,"2"));
        data.insert(std::make_pair(0xa8d3,"3"));
        data.insert(std::make_pair(0xa8d4,"4"));
        data.insert(std::make_pair(0xa8d5,"5"));
        data.insert(std::make_pair(0xa8d6,"6"));
        data.insert(std::make_pair(0xa8d7,"7"));
        data.insert(std::make_pair(0xa8d8,"8"));
        data.insert(std::make_pair(0xa8d9,"9"));
        data.insert(std::make_pair(0xa900,"0"));
        data.insert(std::make_pair(0xa901,"1"));
        data.insert(std::make_pair(0xa902,"2"));
        data.insert(std::make_pair(0xa903,"3"));
        data.insert(std::make_pair(0xa904,"4"));
        data.insert(std::make_pair(0xa905,"5"));
        data.insert(std::make_pair(0xa906,"6"));
        data.insert(std::make_pair(0xa907,"7"));
        data.insert(std::make_pair(0xa908,"8"));
        data.insert(std::make_pair(0xa909,"9"));
        data.insert(std::make_pair(0xa9d0,"0"));
        data.insert(std::make_pair(0xa9d1,"1"));
        data.insert(std::make_pair(0xa9d2,"2"));
        data.insert(std::make_pair(0xa9d3,"3"));
        data.insert(std::make_pair(0xa9d4,"4"));
        data.insert(std::make_pair(0xa9d5,"5"));
        data.insert(std::make_pair(0xa9d6,"6"));
        data.insert(std::make_pair(0xa9d7,"7"));
        data.insert(std::make_pair(0xa9d8,"8"));
        data.insert(std::make_pair(0xa9d9,"9"));
        data.insert(std::make_pair(0xa9f0,"0"));
        data.insert(std::make_pair(0xa9f1,"1"));
        data.insert(std::make_pair(0xa9f2,"2"));
        data.insert(std::make_pair(0xa9f3,"3"));
        data.insert(std::make_pair(0xa9f4,"4"));
        data.insert(std::make_pair(0xa9f5,"5"));
        data.insert(std::make_pair(0xa9f6,"6"));
        data.insert(std::make_pair(0xa9f7,"7"));
        data.insert(std::make_pair(0xa9f8,"8"));
        data.insert(std::make_pair(0xa9f9,"9"));
        data.insert(std::make_pair(0xaa50,"0"));
        data.insert(std::make_pair(0xaa51,"1"));
        data.insert(std::make_pair(0xaa52,"2"));
        data.insert(std::make_pair(0xaa53,"3"));
        data.insert(std::make_pair(0xaa54,"4"));
        data.insert(std::make_pair(0xaa55,"5"));
        data.insert(std::make_pair(0xaa56,"6"));
        data.insert(std::make_pair(0xaa57,"7"));
        data.insert(std::make_pair(0xaa58,"8"));
        data.insert(std::make_pair(0xaa59,"9"));
        data.insert(std::make_pair(0xabf0,"0"));
        data.insert(std::make_pair(0xabf1,"1"));
        data.insert(std::make_pair(0xabf2,"2"));
        data.insert(std::make_pair(0xabf3,"3"));
        data.insert(std::make_pair(0xabf4,"4"));
        data.insert(std::make_pair(0xabf5,"5"));
        data.insert(std::make_pair(0xabf6,"6"));
        data.insert(std::make_pair(0xabf7,"7"));
        data.insert(std::make_pair(0xabf8,"8"));
        data.insert(std::make_pair(0xabf9,"9"));
        data.insert(std::make_pair(0xff10,"0"));
        data.insert(std::make_pair(0xff11,"1"));
        data.insert(std::make_pair(0xff12,"2"));
        data.insert(std::make_pair(0xff13,"3"));
        data.insert(std::make_pair(0xff14,"4"));
        data.insert(std::make_pair(0xff15,"5"));
        data.insert(std::make_pair(0xff16,"6"));
        data.insert(std::make_pair(0xff17,"7"));
        data.insert(std::make_pair(0xff18,"8"));
        data.insert(std::make_pair(0xff19,"9"));
        data.insert(std::make_pair(0x104a0,"0"));
        data.insert(std::make_pair(0x104a1,"1"));
        data.insert(std::make_pair(0x104a2,"2"));
        data.insert(std::make_pair(0x104a3,"3"));
        data.insert(std::make_pair(0x104a4,"4"));
        data.insert(std::make_pair(0x104a5,"5"));
        data.insert(std::make_pair(0x104a6,"6"));
        data.insert(std::make_pair(0x104a7,"7"));
        data.insert(std::make_pair(0x104a8,"8"));
        data.insert(std::make_pair(0x104a9,"9"));
        data.insert(std::make_pair(0x10d30,"0"));
        data.insert(std::make_pair(0x10d31,"1"));
        data.insert(std::make_pair(0x10d32,"2"));
        data.insert(std::make_pair(0x10d33,"3"));
        data.insert(std::make_pair(0x10d34,"4"));
        data.insert(std::make_pair(0x10d35,"5"));
        data.insert(std::make_pair(0x10d36,"6"));
        data.insert(std::make_pair(0x10d37,"7"));
        data.insert(std::make_pair(0x10d38,"8"));
        data.insert(std::make_pair(0x10d39,"9"));
        data.insert(std::make_pair(0x11066,"0"));
        data.insert(std::make_pair(0x11067,"1"));
        data.insert(std::make_pair(0x11068,"2"));
        data.insert(std::make_pair(0x11069,"3"));
        data.insert(std::make_pair(0x1106a,"4"));
        data.insert(std::make_pair(0x1106b,"5"));
        data.insert(std::make_pair(0x1106c,"6"));
        data.insert(std::make_pair(0x1106d,"7"));
        data.insert(std::make_pair(0x1106e,"8"));
        data.insert(std::make_pair(0x1106f,"9"));
        data.insert(std::make_pair(0x110f0,"0"));
        data.insert(std::make_pair(0x110f1,"1"));
        data.insert(std::make_pair(0x110f2,"2"));
        data.insert(std::make_pair(0x110f3,"3"));
        data.insert(std::make_pair(0x110f4,"4"));
        data.insert(std::make_pair(0x110f5,"5"));
        data.insert(std::make_pair(0x110f6,"6"));
        data.insert(std::make_pair(0x110f7,"7"));
        data.insert(std::make_pair(0x110f8,"8"));
        data.insert(std::make_pair(0x110f9,"9"));
        data.insert(std::make_pair(0x11136,"0"));
        data.insert(std::make_pair(0x11137,"1"));
        data.insert(std::make_pair(0x11138,"2"));
        data.insert(std::make_pair(0x11139,"3"));
        data.insert(std::make_pair(0x1113a,"4"));
        data.insert(std::make_pair(0x1113b,"5"));
        data.insert(std::make_pair(0x1113c,"6"));
        data.insert(std::make_pair(0x1113d,"7"));
        data.insert(std::make_pair(0x1113e,"8"));
        data.insert(std::make_pair(0x1113f,"9"));
        data.insert(std::make_pair(0x111d0,"0"));
        data.insert(std::make_pair(0x111d1,"1"));
        data.insert(std::make_pair(0x111d2,"2"));
        data.insert(std::make_pair(0x111d3,"3"));
        data.insert(std::make_pair(0x111d4,"4"));
        data.insert(std::make_pair(0x111d5,"5"));
        data.insert(std::make_pair(0x111d6,"6"));
        data.insert(std::make_pair(0x111d7,"7"));
        data.insert(std::make_pair(0x111d8,"8"));
        data.insert(std::make_pair(0x111d9,"9"));
        data.insert(std::make_pair(0x112f0,"0"));
        data.insert(std::make_pair(0x112f1,"1"));
        data.insert(std::make_pair(0x112f2,"2"));
        data.insert(std::make_pair(0x112f3,"3"));
        data.insert(std::make_pair(0x112f4,"4"));
        data.insert(std::make_pair(0x112f5,"5"));
        data.insert(std::make_pair(0x112f6,"6"));
        data.insert(std::make_pair(0x112f7,"7"));
        data.insert(std::make_pair(0x112f8,"8"));
        data.insert(std::make_pair(0x112f9,"9"));
        data.insert(std::make_pair(0x11450,"0"));
        data.insert(std::make_pair(0x11451,"1"));
        data.insert(std::make_pair(0x11452,"2"));
        data.insert(std::make_pair(0x11453,"3"));
        data.insert(std::make_pair(0x11454,"4"));
        data.insert(std::make_pair(0x11455,"5"));
        data.insert(std::make_pair(0x11456,"6"));
        data.insert(std::make_pair(0x11457,"7"));
        data.insert(std::make_pair(0x11458,"8"));
        data.insert(std::make_pair(0x11459,"9"));
        data.insert(std::make_pair(0x114d0,"0"));
        data.insert(std::make_pair(0x114d1,"1"));
        data.insert(std::make_pair(0x114d2,"2"));
        data.insert(std::make_pair(0x114d3,"3"));
        data.insert(std::make_pair(0x114d4,"4"));
        data.insert(std::make_pair(0x114d5,"5"));
        data.insert(std::make_pair(0x114d6,"6"));
        data.insert(std::make_pair(0x114d7,"7"));
        data.insert(std::make_pair(0x114d8,"8"));
        data.insert(std::make_pair(0x114d9,"9"));
        data.insert(std::make_pair(0x11650,"0"));
        data.insert(std::make_pair(0x11651,"1"));
        data.insert(std::make_pair(0x11652,"2"));
        data.insert(std::make_pair(0x11653,"3"));
        data.insert(std::make_pair(0x11654,"4"));
        data.insert(std::make_pair(0x11655,"5"));
        data.insert(std::make_pair(0x11656,"6"));
        data.insert(std::make_pair(0x11657,"7"));
        data.insert(std::make_pair(0x11658,"8"));
        data.insert(std::make_pair(0x11659,"9"));
        data.insert(std::make_pair(0x116c0,"0"));
        data.insert(std::make_pair(0x116c1,"1"));
        data.insert(std::make_pair(0x116c2,"2"));
        data.insert(std::make_pair(0x116c3,"3"));
        data.insert(std::make_pair(0x116c4,"4"));
        data.insert(std::make_pair(0x116c5,"5"));
        data.insert(std::make_pair(0x116c6,"6"));
        data.insert(std::make_pair(0x116c7,"7"));
        data.insert(std::make_pair(0x116c8,"8"));
        data.insert(std::make_pair(0x116c9,"9"));
        data.insert(std::make_pair(0x11730,"0"));
        data.insert(std::make_pair(0x11731,"1"));
        data.insert(std::make_pair(0x11732,"2"));
        data.insert(std::make_pair(0x11733,"3"));
        data.insert(std::make_pair(0x11734,"4"));
        data.insert(std::make_pair(0x11735,"5"));
        data.insert(std::make_pair(0x11736,"6"));
        data.insert(std::make_pair(0x11737,"7"));
        data.insert(std::make_pair(0x11738,"8"));
        data.insert(std::make_pair(0x11739,"9"));
        data.insert(std::make_pair(0x118e0,"0"));
        data.insert(std::make_pair(0x118e1,"1"));
        data.insert(std::make_pair(0x118e2,"2"));
        data.insert(std::make_pair(0x118e3,"3"));
        data.insert(std::make_pair(0x118e4,"4"));
        data.insert(std::make_pair(0x118e5,"5"));
        data.insert(std::make_pair(0x118e6,"6"));
        data.insert(std::make_pair(0x118e7,"7"));
        data.insert(std::make_pair(0x118e8,"8"));
        data.insert(std::make_pair(0x118e9,"9"));
        data.insert(std::make_pair(0x11950,"0"));
        data.insert(std::make_pair(0x11951,"1"));
        data.insert(std::make_pair(0x11952,"2"));
        data.insert(std::make_pair(0x11953,"3"));
        data.insert(std::make_pair(0x11954,"4"));
        data.insert(std::make_pair(0x11955,"5"));
        data.insert(std::make_pair(0x11956,"6"));
        data.insert(std::make_pair(0x11957,"7"));
        data.insert(std::make_pair(0x11958,"8"));
        data.insert(std::make_pair(0x11959,"9"));
        data.insert(std::make_pair(0x11c50,"0"));
        data.insert(std::make_pair(0x11c51,"1"));
        data.insert(std::make_pair(0x11c52,"2"));
        data.insert(std::make_pair(0x11c53,"3"));
        data.insert(std::make_pair(0x11c54,"4"));
        data.insert(std::make_pair(0x11c55,"5"));
        data.insert(std::make_pair(0x11c56,"6"));
        data.insert(std::make_pair(0x11c57,"7"));
        data.insert(std::make_pair(0x11c58,"8"));
        data.insert(std::make_pair(0x11c59,"9"));
        data.insert(std::make_pair(0x11d50,"0"));
        data.insert(std::make_pair(0x11d51,"1"));
        data.insert(std::make_pair(0x11d52,"2"));
        data.insert(std::make_pair(0x11d53,"3"));
        data.insert(std::make_pair(0x11d54,"4"));
        data.insert(std::make_pair(0x11d55,"5"));
        data.insert(std::make_pair(0x11d56,"6"));
        data.insert(std::make_pair(0x11d57,"7"));
        data.insert(std::make_pair(0x11d58,"8"));
        data.insert(std::make_pair(0x11d59,"9"));
        data.insert(std::make_pair(0x11da0,"0"));
        data.insert(std::make_pair(0x11da1,"1"));
        data.insert(std::make_pair(0x11da2,"2"));
        data.insert(std::make_pair(0x11da3,"3"));
        data.insert(std::make_pair(0x11da4,"4"));
        data.insert(std::make_pair(0x11da5,"5"));
        data.insert(std::make_pair(0x11da6,"6"));
        data.insert(std::make_pair(0x11da7,"7"));
        data.insert(std::make_pair(0x11da8,"8"));
        data.insert(std::make_pair(0x11da9,"9"));
        data.insert(std::make_pair(0x11f50,"0"));
        data.insert(std::make_pair(0x11f51,"1"));
        data.insert(std::make_pair(0x11f52,"2"));
        data.insert(std::make_pair(0x11f53,"3"));
        data.insert(std::make_pair(0x11f54,"4"));
        data.insert(std::make_pair(0x11f55,"5"));
        data.insert(std::make_pair(0x11f56,"6"));
        data.insert(std::make_pair(0x11f57,"7"));
        data.insert(std::make_pair(0x11f58,"8"));
        data.insert(std::make_pair(0x11f59,"9"));
        data.insert(std::make_pair(0x16a60,"0"));
        data.insert(std::make_pair(0x16a61,"1"));
        data.insert(std::make_pair(0x16a62,"2"));
        data.insert(std::make_pair(0x16a63,"3"));
        data.insert(std::make_pair(0x16a64,"4"));
        data.insert(std::make_pair(0x16a65,"5"));
        data.insert(std::make_pair(0x16a66,"6"));
        data.insert(std::make_pair(0x16a67,"7"));
        data.insert(std::make_pair(0x16a68,"8"));
        data.insert(std::make_pair(0x16a69,"9"));
        data.insert(std::make_pair(0x16ac0,"0"));
        data.insert(std::make_pair(0x16ac1,"1"));
        data.insert(std::make_pair(0x16ac2,"2"));
        data.insert(std::make_pair(0x16ac3,"3"));
        data.insert(std::make_pair(0x16ac4,"4"));
        data.insert(std::make_pair(0x16ac5,"5"));
        data.insert(std::make_pair(0x16ac6,"6"));
        data.insert(std::make_pair(0x16ac7,"7"));
        data.insert(std::make_pair(0x16ac8,"8"));
        data.insert(std::make_pair(0x16ac9,"9"));
        data.insert(std::make_pair(0x16b50,"0"));
        data.insert(std::make_pair(0x16b51,"1"));
        data.insert(std::make_pair(0x16b52,"2"));
        data.insert(std::make_pair(0x16b53,"3"));
        data.insert(std::make_pair(0x16b54,"4"));
        data.insert(std::make_pair(0x16b55,"5"));
        data.insert(std::make_pair(0x16b56,"6"));
        data.insert(std::make_pair(0x16b57,"7"));
        data.insert(std::make_pair(0x16b58,"8"));
        data.insert(std::make_pair(0x16b59,"9"));
        data.insert(std::make_pair(0x1d7ce,"0"));
        data.insert(std::make_pair(0x1d7cf,"1"));
        data.insert(std::make_pair(0x1d7d0,"2"));
        data.insert(std::make_pair(0x1d7d1,"3"));
        data.insert(std::make_pair(0x1d7d2,"4"));
        data.insert(std::make_pair(0x1d7d3,"5"));
        data.insert(std::make_pair(0x1d7d4,"6"));
        data.insert(std::make_pair(0x1d7d5,"7"));
        data.insert(std::make_pair(0x1d7d6,"8"));
        data.insert(std::make_pair(0x1d7d7,"9"));
        data.insert(std::make_pair(0x1d7d8,"0"));
        data.insert(std::make_pair(0x1d7d9,"1"));
        data.insert(std::make_pair(0x1d7da,"2"));
        data.insert(std::make_pair(0x1d7db,"3"));
        data.insert(std::make_pair(0x1d7dc,"4"));
        data.insert(std::make_pair(0x1d7dd,"5"));
        data.insert(std::make_pair(0x1d7de,"6"));
        data.insert(std::make_pair(0x1d7df,"7"));
        data.insert(std::make_pair(0x1d7e0,"8"));
        data.insert(std::make_pair(0x1d7e1,"9"));
        data.insert(std::make_pair(0x1d7e2,"0"));
        data.insert(std::make_pair(0x1d7e3,"1"));
        data.insert(std::make_pair(0x1d7e4,"2"));
        data.insert(std::make_pair(0x1d7e5,"3"));
        data.insert(std::make_pair(0x1d7e6,"4"));
        data.insert(std::make_pair(0x1d7e7,"5"));
        data.insert(std::make_pair(0x1d7e8,"6"));
        data.insert(std::make_pair(0x1d7e9,"7"));
        data.insert(std::make_pair(0x1d7ea,"8"));
        data.insert(std::make_pair(0x1d7eb,"9"));
        data.insert(std::make_pair(0x1d7ec,"0"));
        data.insert(std::make_pair(0x1d7ed,"1"));
        data.insert(std::make_pair(0x1d7ee,"2"));
        data.insert(std::make_pair(0x1d7ef,"3"));
        data.insert(std::make_pair(0x1d7f0,"4"));
        data.insert(std::make_pair(0x1d7f1,"5"));
        data.insert(std::make_pair(0x1d7f2,"6"));
        data.insert(std::make_pair(0x1d7f3,"7"));
        data.insert(std::make_pair(0x1d7f4,"8"));
        data.insert(std::make_pair(0x1d7f5,"9"));
        data.insert(std::make_pair(0x1d7f6,"0"));
        data.insert(std::make_pair(0x1d7f7,"1"));
        data.insert(std::make_pair(0x1d7f8,"2"));
        data.insert(std::make_pair(0x1d7f9,"3"));
        data.insert(std::make_pair(0x1d7fa,"4"));
        data.insert(std::make_pair(0x1d7fb,"5"));
        data.insert(std::make_pair(0x1d7fc,"6"));
        data.insert(std::make_pair(0x1d7fd,"7"));
        data.insert(std::make_pair(0x1d7fe,"8"));
        data.insert(std::make_pair(0x1d7ff,"9"));
        data.insert(std::make_pair(0x1e140,"0"));
        data.insert(std::make_pair(0x1e141,"1"));
        data.insert(std::make_pair(0x1e142,"2"));
        data.insert(std::make_pair(0x1e143,"3"));
        data.insert(std::make_pair(0x1e144,"4"));
        data.insert(std::make_pair(0x1e145,"5"));
        data.insert(std::make_pair(0x1e146,"6"));
        data.insert(std::make_pair(0x1e147,"7"));
        data.insert(std::make_pair(0x1e148,"8"));
        data.insert(std::make_pair(0x1e149,"9"));
        data.insert(std::make_pair(0x1e2f0,"0"));
        data.insert(std::make_pair(0x1e2f1,"1"));
        data.insert(std::make_pair(0x1e2f2,"2"));
        data.insert(std::make_pair(0x1e2f3,"3"));
        data.insert(std::make_pair(0x1e2f4,"4"));
        data.insert(std::make_pair(0x1e2f5,"5"));
        data.insert(std::make_pair(0x1e2f6,"6"));
        data.insert(std::make_pair(0x1e2f7,"7"));
        data.insert(std::make_pair(0x1e2f8,"8"));
        data.insert(std::make_pair(0x1e2f9,"9"));
        data.insert(std::make_pair(0x1e4f0,"0"));
        data.insert(std::make_pair(0x1e4f1,"1"));
        data.insert(std::make_pair(0x1e4f2,"2"));
        data.insert(std::make_pair(0x1e4f3,"3"));
        data.insert(std::make_pair(0x1e4f4,"4"));
        data.insert(std::make_pair(0x1e4f5,"5"));
        data.insert(std::make_pair(0x1e4f6,"6"));
        data.insert(std::make_pair(0x1e4f7,"7"));
        data.insert(std::make_pair(0x1e4f8,"8"));
        data.insert(std::make_pair(0x1e4f9,"9"));
        data.insert(std::make_pair(0x1e950,"0"));
        data.insert(std::make_pair(0x1e951,"1"));
        data.insert(std::make_pair(0x1e952,"2"));
        data.insert(std::make_pair(0x1e953,"3"));
        data.insert(std::make_pair(0x1e954,"4"));
        data.insert(std::make_pair(0x1e955,"5"));
        data.insert(std::make_pair(0x1e956,"6"));
        data.insert(std::make_pair(0x1e957,"7"));
        data.insert(std::make_pair(0x1e958,"8"));
        data.insert(std::make_pair(0x1e959,"9"));
        data.insert(std::make_pair(0x1fbf0,"0"));
        data.insert(std::make_pair(0x1fbf1,"1"));
        data.insert(std::make_pair(0x1fbf2,"2"));
        data.insert(std::make_pair(0x1fbf3,"3"));
        data.insert(std::make_pair(0x1fbf4,"4"));
        data.insert(std::make_pair(0x1fbf5,"5"));
        data.insert(std::make_pair(0x1fbf6,"6"));
        data.insert(std::make_pair(0x1fbf7,"7"));
        data.insert(std::make_pair(0x1fbf8,"8"));
        data.insert(std::make_pair(0x1fbf9,"9"));
    }
    auto it = data.find(code);
    return it != data.end() ? (*it).second.c_str() : nullptr;
}
