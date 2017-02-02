include (CTest)

include_directories (${CMAKE_SOURCE_DIR}/src)

file (GLOB_RECURSE TESTS . *Test.cpp)

foreach (filename ${TESTS})
    get_filename_component (test ${filename} NAME_WE)
    add_executable (${test} ${test} Main.cpp)
    add_dependencies(${test} ${PROJECT_NAME} ${EXTERNAL_PROJECTS} ${EXTERNAL_TEST_PROJECTS})
    target_link_libraries (${test} ${PROJECT_NAME} ${EXTERNAL_LIBRARIES} ${EXTERNAL_TEST_LIBRARIES})
    add_test (${test} ${test})
endforeach (filename)

