#include <cstdint>
#include <catch2/catch_test_macros.hpp>
#include <vector>

#include "../src/elevator.hpp"

TEST_CASE("Elevator moves to 3", "[ElevatorMove]") {
    Elevator elevator(0);
    elevator.Move(3);
    REQUIRE(elevator.GetCurrentFloor() == 3);
    REQUIRE(elevator.GetTravelTime() == 30);
    std::vector<int32_t> visited;
    visited. push_back(0);
    visited. push_back(3);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<int32_t>());
}

TEST_CASE("Elevator moves to 255", "[ElevatorMove]") {
    Elevator elevator(0);
    elevator.Move(255);
    REQUIRE(elevator.GetCurrentFloor() == 255);
    REQUIRE(elevator.GetTravelTime() == 2550);
    std::vector<int32_t> visited;
    visited. push_back(0);
    visited. push_back(255);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<int32_t>());
}

TEST_CASE("Elevator moves to 3 and 255", "[ElevatorMove]") {
    Elevator elevator(0);
    elevator.Move(3);
    elevator.Move(255);
    REQUIRE(elevator.GetCurrentFloor() == 255);
    REQUIRE(elevator.GetTravelTime() == 2580);
    std::vector<int32_t> visited;
    visited. push_back(0);
    visited. push_back(3);
    visited. push_back(255);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<int32_t>());
}

TEST_CASE("Elevator moves to 0", "[ElevatorMove]") {
    Elevator elevator(100);
    elevator.Move(0);
    REQUIRE(elevator.GetCurrentFloor() == 0);
    REQUIRE(elevator.GetTravelTime() == 1000);
    std::vector<int32_t> visited;
    visited. push_back(100);
    visited. push_back(0);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<int32_t>());
}

TEST_CASE("Elevator moves to itself", "[ElevatorMove]") {
    Elevator elevator(0);
    elevator.Move(0);
    REQUIRE(elevator.GetCurrentFloor() == 0);
    REQUIRE(elevator.GetTravelTime() == 0);
    std::vector<int32_t> visited;
    visited. push_back(0);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<int32_t>());
}