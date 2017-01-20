include_directories (${CMAKE_SOURCE_DIR}/src)

enable_testing ()

file (GLOB_RECURSE TESTS . *Test.cpp)

foreach (filename ${TESTS})
    get_filename_component (test ${filename} NAME_WE)
    add_executable (${test} ${test} Main.cpp)
    add_dependencies(${test} ${EXTERNAL_PROJECTS} ${EXTERNAL_TEST_PROJECTS})
    target_link_libraries (${test} ${EXTERNAL_LIBRARIES} ${EXTERNAL_TEST_LIBRARIES} ${PROJECT_NAME})
    add_test (${test} ${test})
endforeach (filename)

