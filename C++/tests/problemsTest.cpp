#include <gtest/gtest.h>

#include "../problem001.h"
#include "../problem002.h"
#include "../problem003.h"
#include "../problem004.h"
#include "../problem005.h"

TEST(Problem001, CheckResult) {
  EXPECT_EQ(problem001(), 233168);
}

TEST(Problem002, CheckResult) {
  EXPECT_EQ(problem002(), 4613732);
}

TEST(Problem003, CheckResult) {
  EXPECT_EQ(problem003(), 6857);
}

TEST(Problem004, CheckResult) {
  EXPECT_EQ(problem004(), 906609);
}

TEST(Problem005, CheckResult) {
  EXPECT_EQ(problem005(), 232792560);
}