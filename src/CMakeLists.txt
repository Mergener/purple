# Set source files here.
set(SOURCES lib.cpp)

add_subdirectory(gen)

# Create library.
add_library(purple_lib STATIC ${SOURCES})
target_link_libraries(purple_lib PUBLIC antlr_parser)
target_include_directories(purple_lib PUBLIC ${EXT_DIRECTORY}/antlr4-cpp-runtime/runtime/src)

# Create executable.
add_executable(purple main.cpp ${SOURCES})
target_link_libraries(purple PRIVATE purple_lib)
