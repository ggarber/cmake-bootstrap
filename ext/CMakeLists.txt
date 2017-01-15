include (ExternalProject)

externalproject_add (googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG master
  UPDATE_DISCONNECTED 1
  CMAKE_ARGS "-DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/ext -Dgtest_disable_pthreads=ON"
)
