#include <gtest/gtest.h>
#include "../src/functions.hpp"

TEST(FunctionsTest, SumTest1) { ASSERT_EQ(sum(1, 2), 3); }

TEST(FunctionsTest, SumTest2) { ASSERT_EQ(sum(2, 3), 5); }

TEST(FunctionsTest, SumTest3) { ASSERT_EQ(sum(4, 3), 7); }