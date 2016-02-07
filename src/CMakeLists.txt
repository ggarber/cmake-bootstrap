add_library(Foo
    Foo.cpp
)

add_executable(FooMain
    # Add source files here
    FooMain.cpp
)

target_link_libraries(FooMain
    # Add libraries here
    Foo
)
