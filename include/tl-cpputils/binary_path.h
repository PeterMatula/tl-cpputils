/**
 * @file include/tl-cpputils/binary_path.h
 * @brief Absolute path of currently running binary getters.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

#ifndef TL_CPPUTILS_BINARY_PATH_H
#define TL_CPPUTILS_BINARY_PATH_H

#include <whereami/whereami.h>

#include "tl-cpputils/binary_path.h"
#include "tl-cpputils/filesystem_path.h"

namespace tl_cpputils {

FilesystemPath getThisBinaryPath();
FilesystemPath getThisBinaryDirectoryPath();

} // namespace tl_cpputils

#endif
