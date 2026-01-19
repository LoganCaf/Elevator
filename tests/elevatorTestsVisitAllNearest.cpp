/**
 * @file elevatorTestsVisitAllNearest.cpp
 * @author Logan Caffey
 * @brief Tests for the VisitAllNearest Elevator function
 */

#include <cstdint>
#include <catch2/catch_test_macros.hpp>
#include <vector>

#include "../src/elevator.hpp"

TEST_CASE("Elevator nearest scheduler reduces travel time", "[ElevatorVisitAllNearest]") {
    Elevator elevator(12);
    elevator.AddDestination(2);
    elevator.AddDestination(9);
    elevator.AddDestination(1);
    elevator.AddDestination(32);
    elevator.VisitAllNearest();

    REQUIRE(elevator.GetCurrentFloor() == 32);
    REQUIRE(elevator.GetTravelTime() == 420);

    std::vector<int32_t> visited;
    visited.push_back(12);
    visited.push_back(9);
    visited.push_back(2);
    visited.push_back(1);
    visited.push_back(32);
    REQUIRE(elevator.GetVisited() == visited);
    REQUIRE(elevator.GetTargets() == std::vector<int32_t>());
}

