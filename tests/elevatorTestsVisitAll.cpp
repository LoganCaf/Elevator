#include <cstdint>
#include <catch2/catch_test_macros.hpp>
#include <vector>

#include "../src/elevator.hpp"

TEST_CASE("Elevator moves to 17", "[ElevatorVisitAll]") {
    Elevator elevator(0);
    elevator.AddDestination(17);
    elevator.VisitAll();
    REQUIRE(elevator.GetCurrentFloor() == 17);
    REQUIRE(elevator.GetTravelTime() == 170);
    std::vector<uint16_t> visited;
    visited. push_back(0);
    visited. push_back(17);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() ==  std::vector<uint16_t>());
}

TEST_CASE("Elevator moves to 2 9 1 32", "[ElevatorVisitAll]") {
    Elevator elevator(12);
    elevator.AddDestination(2);
    elevator.AddDestination(9);
    elevator.AddDestination(1);
    elevator.AddDestination(32);
    elevator.VisitAll();
    REQUIRE(elevator.GetCurrentFloor() == 32);
    REQUIRE(elevator.GetTravelTime() == 560);
    std::vector<uint16_t> visited;
    visited. push_back(12);
    visited. push_back(2);
    visited. push_back(9);
    visited. push_back(1);
    visited. push_back(32);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() ==  std::vector<uint16_t>());
}

TEST_CASE("Elevator moves to 255 0 itself", "[ElevatorVisitAll]") {
    Elevator elevator(21);
    elevator.AddDestination(255);
    elevator.AddDestination(0);
    elevator.AddDestination(21);
    elevator.VisitAll();
    REQUIRE(elevator.GetCurrentFloor() == 21);
    REQUIRE(elevator.GetTravelTime() == 5100);
    std::vector<uint16_t> visited;
    visited. push_back(21);
    visited. push_back(255);
    visited. push_back(0);
    visited. push_back(21);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() ==  std::vector<uint16_t>());
}