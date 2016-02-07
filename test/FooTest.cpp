#include "gtest/gtest.h"

#include "Foo.h"

/**
Template unit test case fixture class. Make a copy of this.

@author Alex Tsui
@date 2011-12-22
*/
class FooTest : public ::testing::Test
{
protected:
    // You can remove any or all of the following functions if its body
    // is empty.

    FooTest() {
        // You can do set-up work for each test here.
    }

    virtual ~FooTest() {
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
    Foo foo;
};

// Tests that Foo does Xyz.
TEST_F(FooTest, SmokeTest) 
{
    // Exercises the Xyz feature of Foo.

    int x1 = 1;
    int x2 = 2;
    int expected = 3;
    int actual = foo.sum( x1, x2 );
    ASSERT_EQ( expected, actual );
}
