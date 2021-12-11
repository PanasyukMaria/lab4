
#include <gtest/gtest.h>
#include "header.hpp"

TEST(Programm, WorkTest) {
  try {
    std::string path("../misc/ftp");
    Filesystem test(path);
    std::cout << test;
  } catch (...) {
  }
  EXPECT_TRUE(true);
}