#include <cstdint>
#include <catch2/catch_test_macros.hpp>
#include <vector>

#include "../src/elevator.hpp"

TEST_CASE("Elevator initializes to 0", "[ElevatorInit]") {
    Elevator elevator(0);
    REQUIRE(elevator.GetCurrentFloor() == 0);
    REQUIRE(elevator.GetTravelTime() == 0);
    std::vector<uint16_t> visited;
    visited. push_back(0);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<uint16_t>());
}

TEST_CASE("Elevator initializes to 13", "[ElevatorInit]") {
    Elevator elevator(13);
    REQUIRE(elevator.GetCurrentFloor() == 13);
    REQUIRE(elevator.GetTravelTime() == 13);
    std::vector<uint16_t> visited;
    visited. push_back(13);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<uint16_t>());
}

TEST_CASE("Elevator initializes to 255", "[ElevatorInit]") {
    Elevator elevator(255);
    REQUIRE(elevator.GetCurrentFloor() == 255);
    REQUIRE(elevator.GetTravelTime() == 255);
    std::vector<uint16_t> visited;
    visited. push_back(255);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<uint16_t>());
}

TEST_CASE("Elevator initializes to 256 overflow", "[ElevatorInit]") {
    Elevator elevator(256);
    REQUIRE(elevator.GetCurrentFloor() == 1);
    REQUIRE(elevator.GetTravelTime() == 1);
    std::vector<uint16_t> visited;
    visited. push_back(1);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<uint16_t>());
}

TEST_CASE("Elevator initializes to -1 underflow", "[ElevatorInit]") {
    Elevator elevator(-1);
    REQUIRE(elevator.GetCurrentFloor() == 255);
    REQUIRE(elevator.GetTravelTime() == 255);
    std::vector<uint16_t> visited;
    visited. push_back(255);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<uint16_t>());
}
