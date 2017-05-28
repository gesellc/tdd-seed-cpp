#include "gtest/gtest.h"
#include "gmock/gmock.h"

using ::testing::Return;
using ::testing::AnyNumber;
using ::testing::_;
using ::testing::Pointee;


TEST(ApplicationTest, nothing) {
  ASSERT_EQ("This", "This");
}
