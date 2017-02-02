include (ExternalProject)

set (EXTERNAL_LIBRARIES uv PARENT_SCOPE)
set (EXTERNAL_PROJECTS log4cxx_project libuv_project PARENT_SCOPE)

set (EXTERNAL_TEST_LIBRARIES gtest PARENT_SCOPE)
set (EXTERNAL_TEST_PROJECTS gtest_project PARENT_SCOPE)

externalproject_add (log4cxx_project
  URL http://mirror.cogentco.com/pub/apache/logging/log4cxx/0.10.0/apache-log4cxx-0.10.0.tar.gz
  URL_MD5 b30ffb8da3665178e68940ff7a61084c
  BUILD_IN_SOURCE 1
  UPDATE_COMMAND ""
  PATCH_COMMAND patch -N -p1 < ${CMAKE_CURRENT_SOURCE_DIR}/log4cxx-diff.patch || true
  CONFIGURE_COMMAND ./configure --prefix=${CMAKE_BINARY_DIR}/ext --disable-doxygen --disable-debug --disable-dependency-tracking
  BUILD_COMMAND make
  INSTALL_COMMAND make install
)

externalproject_add (gtest_project
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG master
  UPDATE_COMMAND ""
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/ext -Dgtest_disable_pthreads=ON
)

externalproject_add (libuv_project
  GIT_REPOSITORY https://github.com/libuv/libuv.git
  GIT_TAG v1.x
  BUILD_IN_SOURCE 1
  UPDATE_COMMAND ""
  CONFIGURE_COMMAND ./autogen.sh COMMAND ./configure --prefix=${CMAKE_BINARY_DIR}/ext
  BUILD_COMMAND make
  INSTALL_COMMAND make install
)
