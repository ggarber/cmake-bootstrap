include (ExternalProject)

set (EXTERNAL_LIBRARIES  PARENT_SCOPE)
set (EXTERNAL_PROJECTS  PARENT_SCOPE)

set (EXTERNAL_TEST_LIBRARIES gtest PARENT_SCOPE)
set (EXTERNAL_TEST_PROJECTS gtest_project PARENT_SCOPE)

externalproject_add (gtest_project
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG master
  UPDATE_COMMAND ""
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/ext -Dgtest_disable_pthreads=ON
)
