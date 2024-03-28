include(cmake/prelude.cmake)

if (${CMAKE_VERSION} VERSION_LESS "3.12")
    cmake_minimum_required(VERSION 3.0)
else()
    cmake_minimum_required(VERSION 3.0...3.12)
endif()

set(LIBRARY_HEADER include/unicode_data/unicode_data.h)

file(READ ${LIBRARY_HEADER} CURRENT_VERSION_H)
string(REGEX MATCH "\#define UNICODE_DATA_VERSION_MAJOR +([0-9]+)" MAJOR_VERSION ${CURRENT_VERSION_H})
set(LIBRARY_VERSION_MAJOR ${CMAKE_MATCH_1})
string(REGEX MATCH "\#define UNICODE_DATA_VERSION_MINOR +([0-9]+)" MINOR_VERSION ${CURRENT_VERSION_H})
set(LIBRARY_VERSION_MINOR ${CMAKE_MATCH_1})
string(REGEX MATCH "\#define UNICODE_DATA_VERSION_PATCH +([0-9]+)" PATCH_VERSION ${CURRENT_VERSION_H})
set(LIBRARY_VERSION_PATCH ${CMAKE_MATCH_1})

project("unicode_data"
    VERSION ${LIBRARY_VERSION_MAJOR}.${LIBRARY_VERSION_MINOR}.${LIBRARY_VERSION_PATCH}
    LANGUAGES CXX
)

set(PROJECT_HOMEPAGE_URL "https://github.com/rue-ryuzaki/unicode_data")

include(cmake/project-is-top-level.cmake)
include(cmake/warnings.cmake)

if (NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 11)
endif()
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

message("unicode_data version: ${PROJECT_VERSION}")
message("unicode_data build standard: C++${CMAKE_CXX_STANDARD}")

include_directories(include)

file(GLOB_RECURSE PROJECT_SOURCES "include/unicode_data/*.h" "src/*.c*")

set(SRC_LIST ${PROJECT_SOURCES})

add_library(unicode_data SHARED ${SRC_LIST})
add_library(unicode::unicode_data ALIAS unicode_data)

set_target_properties(
    unicode_data PROPERTIES
        VERSION ${PROJECT_VERSION}
        SOVERSION ${PROJECT_VERSION_MAJOR}
        PUBLIC_HEADER ${LIBRARY_HEADER}
)

include(GNUInstallDirs)

target_include_directories(
    unicode_data PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

if (NOT PROJECT_IS_TOP_LEVEL)
    return()
endif()

if (DEFERED_CMAKE_INSTALL_PREFIX)
    configure_file(
        "${CMAKE_CURRENT_SOURCE_DIR}/cmake/pkg-config.pc.in"
        "${CMAKE_CURRENT_BINARY_DIR}/unicode_data.pc" @ONLY
    )
else()
    set(_MARK "@")
    set(DEFERED_CMAKE_INSTALL_PREFIX "${_MARK}CMAKE_INSTALL_PREFIX${_MARK}")

    configure_file(
        "${CMAKE_CURRENT_SOURCE_DIR}/cmake/pkg-config.pc.in"
        "${CMAKE_CURRENT_BINARY_DIR}/unicode_data.pc.in" @ONLY
    )
    install(
        CODE "configure_file(\"${CMAKE_CURRENT_BINARY_DIR}/unicode_data.pc.in\" \"${CMAKE_CURRENT_BINARY_DIR}/unicode_data.pc\" @ONLY)"
    )
endif()

set(LIBRARY_CONFIG ${CMAKE_CURRENT_BINARY_DIR}/unicode_data.pc)

install(
    TARGETS unicode_data
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
install(FILES ${LIBRARY_CONFIG} DESTINATION ${CMAKE_INSTALL_DATADIR}/pkgconfig)

set(CPACK_PACKAGE_NAME "unicode_data-dev")
set(CPACK_PACKAGE_MAINTAINER "Mikhail Golubchikov")
set(CMAKE_PROJECT_HOMEPAGE_URL "${PROJECT_HOMEPAGE_URL}")
if (${CMAKE_VERSION} VERSION_LESS "3.12")
    set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
endif()
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_RESOURCE_FILE_README "${CMAKE_CURRENT_SOURCE_DIR}/README.md")
set(CPACK_PACKAGE_DESCRIPTION_FILE "${CPACK_RESOURCE_FILE_README}")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "UnicodeData")

if (CMAKE_SYSTEM_NAME STREQUAL "Linux")
    set(CPACK_GENERATOR "DEB;RPM")
    ## DEB
    set(CPACK_DEBIAN_PACKAGE_SECTION "devel")
    set(CPACK_DEBIAN_PACKAGE_NAME "${CPACK_PACKAGE_NAME}")
    set(CPACK_DEBIAN_PACKAGE_DESCRIPTION "C/C++ UnicodeData library")
    set(CPACK_DEBIAN_PACKAGE_MAINTAINER "${CPACK_PACKAGE_MAINTAINER}")
    set(CPACK_DEBIAN_PACKAGE_SUGGESTS "cmake, build-essential")
    if (NOT ${CMAKE_VERSION} VERSION_LESS "3.6")
        set(CPACK_DEBIAN_FILE_NAME DEB-DEFAULT)
    endif()
    ## RPM
    set(CPACK_RPM_PACKAGE_NAME "${CPACK_PACKAGE_NAME}")
    set(CPACK_RPM_PACKAGE_DESCRIPTION "${CPACK_DEBIAN_PACKAGE_DESCRIPTION}")
    set(CPACK_RPM_PACKAGE_MAINTAINER "${CPACK_PACKAGE_MAINTAINER}")
    # set(CPACK_RPM_PACKAGE_SUGGESTS "${CPACK_DEBIAN_PACKAGE_SUGGESTS}")
    set(CPACK_RPM_PACKAGE_LICENSE "LGPL-2.1")
    if (NOT ${CMAKE_VERSION} VERSION_LESS "3.6")
        set(CPACK_RPM_FILE_NAME RPM-DEFAULT)
    endif()

    set(CPACK_DEB_COMPONENT_INSTALL ON)
    set(CPACK_RPM_COMPONENT_INSTALL ON)
endif()

if (NOT CPACK_GENERATOR)
    if (WIN32)
        set(CPACK_GENERATOR ZIP)
    else()
        set(CPACK_GENERATOR TGZ)
    endif()
endif()

include(CPack)
