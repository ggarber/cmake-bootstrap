include_directories (${CMAKE_SOURCE_DIR}/src)

enable_testing ()

add_executable (FooTest AllTests.cpp FooTest.cpp)

target_link_libraries (FooTest
    Foo
    gtest
)

add_test (AllTests FooTest)
