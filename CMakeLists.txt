cmake_minimum_required(VERSION 3.0)
project(algorithms)

# utils
add_subdirectory("src/utils")
include_directories("src/utils")

# collections
add_subdirectory("src/collections")
include_directories("src/collections")

# fundamentals
add_subdirectory("src/fundamentals")

# exercises
add_subdirectory("src/exercises")
