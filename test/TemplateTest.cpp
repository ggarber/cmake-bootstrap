// Copyright 2017 <ggarber@github>

#include <gtest/gtest.h>

#include "Template.hpp"

using bootstrap::Template;

class TemplateTest: public ::testing::Test {
 protected:
  TemplateTest() {
    // You can do set-up work for each test here.
  }

  virtual ~TemplateTest() {
    // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  virtual void SetUp() {
    // Code here will be called immediately after the constructor (right
    // before each test).
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test (right
    // before the destructor).
  }

  // Objects declared here can be used by all tests in the test case for Foo.
  Template foo;
};

TEST_F(TemplateTest, SmokeTest) {
  int x1 = 1;
  int x2 = 2;
  int expected = 3;
  int actual = foo.sum(x1, x2);
  ASSERT_EQ(expected, actual);
}
