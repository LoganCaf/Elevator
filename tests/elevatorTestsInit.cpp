/**
 * @file elevatorTestsInit.cpp
 * @author Logan Caffey
 * @brief tests for the initialazation of the Elevator class
 * 
 */

#include <cstdint>
#include <catch2/catch_test_macros.hpp>
#include <vector>

#include "../src/elevator.hpp"

TEST_CASE("Elevator initializes to 0", "[ElevatorInit]") {
    Elevator elevator(0);
    REQUIRE(elevator.GetCurrentFloor() == 0);
    REQUIRE(elevator.GetTravelTime() == 0);
    std::vector<int32_t> visited;
    visited.push_back(0);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<int32_t>());
}

TEST_CASE("Elevator initializes to 13", "[ElevatorInit]") {
    Elevator elevator(13);
    REQUIRE(elevator.GetCurrentFloor() == 13);
    REQUIRE(elevator.GetTravelTime() == 0);
    std::vector<int32_t> visited;
    visited.push_back(13);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<int32_t>());
}

TEST_CASE("Elevator initializes to 2147483647", "[ElevatorInit]") {
    Elevator elevator(2147483647);
    REQUIRE(elevator.GetCurrentFloor() == 2147483647);
    REQUIRE(elevator.GetTravelTime() == 0);
    std::vector<int32_t> visited;
    visited.push_back(2147483647);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<int32_t>());
}

TEST_CASE("Elevator initializes to -2147483648", "[ElevatorInit]") {
    Elevator elevator(-2147483648);
    REQUIRE(elevator.GetCurrentFloor() == -2147483648);
    REQUIRE(elevator.GetTravelTime() == 0);
    std::vector<int32_t> visited;
    visited.push_back(-2147483648);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<int32_t>());
}

TEST_CASE("Elevator initializes to -600", "[ElevatorInit]") {
    Elevator elevator(-600);
    REQUIRE(elevator.GetCurrentFloor() == -600);
    REQUIRE(elevator.GetTravelTime() == 0);
    std::vector<int32_t> visited;
    visited.push_back(-600);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<int32_t>());
}
