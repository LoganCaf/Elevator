cmake_minimum_required(VERSION 3.10)
project(Elevator)

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the main executable
add_executable(Elevator src/main.cpp src/elevator.cpp)

# Enable testing
enable_testing()

# Download Catch2 via CMake’s FetchContent
include(FetchContent)
FetchContent_Declare(
  catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.8.0
)
FetchContent_MakeAvailable(catch2)

# Add a test executable
add_executable(ElevatorTests tests/elevatorTestsAddTarget.cpp  tests/elevatorTestsInit.cpp  tests/elevatorTestsMove.cpp  tests/elevatorTestsVisitAll.cpp tests/elevatorTestsVisitAllNearest.cpp src/elevator.cpp)
target_link_libraries(ElevatorTests PRIVATE Catch2::Catch2WithMain)

# Register the test with CTest
include(CTest)
include(Catch)
catch_discover_tests(ElevatorTests)
