file (GLOB_RECURSE SRCS . *.cpp)

add_library(${PROJECT_NAME}
    ${SRCS}
)

add_executable(Main
    Main.cpp
)

target_link_libraries(Main
    # Add libraries here
    ${PROJECT_NAME}
)
