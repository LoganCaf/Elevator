#include <cstdint>
#include <catch2/catch_test_macros.hpp>
#include <vector>

#include "../src/elevator.hpp"

TEST_CASE("Elevator initializes to 0", "[Elevator]") {
    Elevator elevator(0);
    REQUIRE(elevator.GetCurrentFloor() == 0);
    REQUIRE(elevator.GetTravelTime() == 0);
    REQUIRE(elevator.GetVisited() == std::vector<uint16_t>());
    REQUIRE(elevator.GetTargets() == std::vector<uint16_t>());
}
