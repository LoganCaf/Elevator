#include <cstdint>
#include <catch2/catch_test_macros.hpp>
#include <vector>

#include "../src/elevator.hpp"

TEST_CASE("Elevator add 10", "[ElevatorAddTarget]") {
    Elevator elevator(0);
    elevator.AddDestination(10);
    REQUIRE(elevator.GetCurrentFloor() == 0);
    REQUIRE(elevator.GetTravelTime() == 0);
    std::vector<uint16_t> visited;
    visited. push_back(0);
    REQUIRE(elevator.GetVisited() == visited);
    std::vector<uint16_t> targets;
    targets. push_back(10);
    REQUIRE(elevator.GetTargets() == targets);
}

TEST_CASE("Elevator add itself", "[ElevatorAddTarget]") {
    Elevator elevator(0);
    elevator.AddDestination(0);
    REQUIRE(elevator.GetCurrentFloor() == 0);
    REQUIRE(elevator.GetTravelTime() == 0);
    std::vector<uint16_t> visited;
    visited. push_back(0);
    REQUIRE(elevator.GetVisited() == visited);
    std::vector<uint16_t> targets;
    targets. push_back(0);
    REQUIRE(elevator.GetTargets() == targets);
}

TEST_CASE("Elevator add 255", "[ElevatorAddTarget]") {
    Elevator elevator(0);
    elevator.AddDestination(255);
    REQUIRE(elevator.GetCurrentFloor() == 0);
    REQUIRE(elevator.GetTravelTime() == 0);
    std::vector<uint16_t> visited;
    visited. push_back(0);
    REQUIRE(elevator.GetVisited() == visited);
    std::vector<uint16_t> targets;
    targets. push_back(0);
    REQUIRE(elevator.GetTargets() == targets);
}

TEST_CASE("Elevator add 255 0 itself", "[ElevatorAddTarget]") {
    Elevator elevator(10);
    elevator.AddDestination(255);
    elevator.AddDestination(0);
    elevator.AddDestination(10);
    REQUIRE(elevator.GetCurrentFloor() == 0);
    REQUIRE(elevator.GetTravelTime() == 0);
    std::vector<uint16_t> visited;
    visited. push_back(10);
    REQUIRE(elevator.GetVisited() == visited);
    std::vector<uint16_t> targets;
    targets. push_back(255);
    targets. push_back(0);
    targets. push_back(10);
    REQUIRE(elevator.GetTargets() == targets);
}

