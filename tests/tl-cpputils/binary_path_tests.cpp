/**
* @file tests/tl-cpputils/binary_path_tests.cpp
* @brief Tests for the @c binary_path module.
* @copyright (c) 2017 Avast Software, licensed under the MIT license
*/

#include <gtest/gtest.h>

#include "tl-cpputils/binary_path.h"

using namespace ::testing;

namespace tl_cpputils {
namespace tests {

/**
* @brief Tests for the @c binary_path module.
*/
class ThisBinaryPathTests: public Test {};

//
// getThisBinaryPath()
//

TEST_F(ThisBinaryPathTests,
CorrectBinaryPathDetection) {
	EXPECT_TRUE(getThisBinaryPath().exists());
	EXPECT_TRUE(getThisBinaryPath().isFile());
}

//
// getThisBinaryDirectoryPath()
//

TEST_F(ThisBinaryPathTests,
CorrectBinaryDirPathDetection) {
	EXPECT_TRUE(getThisBinaryDirectoryPath().exists());
	EXPECT_TRUE(getThisBinaryDirectoryPath().isDirectory());
}

} // namespace tests
} // namespace tl_cpputils
