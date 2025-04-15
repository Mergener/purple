# Set source files here.
set(SOURCES lib.cpp)

# Create library.
add_library(purple_lib STATIC ${SOURCES})

# Create executable.
add_executable(purple main.cpp ${SOURCES})
target_link_libraries(purple PRIVATE purple_lib)