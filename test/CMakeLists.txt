include_directories (${CMAKE_SOURCE_DIR}/src)

enable_testing ()

file (GLOB_RECURSE TESTS . *Test.cpp)

foreach (filename ${TESTS})
    get_filename_component (test ${filename} NAME_WE)
    add_executable (${test} ${test} Main.cpp)
    target_link_libraries (${test} gtest ${PROJECT_NAME})
    add_test (${test} ${test})
endforeach (filename)

