#ifndef ELEVATOR_HPP
#define ELEVATOR_HPP

#include <cstdint>
#include <vector>


class Elevator{
    public:
    Elevator(const int32_t currentFloor);
    void Move(const int32_t targetFloor);
    void AddDestination(const int32_t targetFloor);
    void VisitAll();

    // needed for testing
    int32_t GetCurrentFloor();
    uint32_t GetTravelTime();
    std::vector<int32_t> GetVisited();
    std::vector<int32_t> GetTargets();
    private:
    int32_t currentFloor;
    uint32_t travelTime;
    std::vector<int32_t> visited;
    std::vector<int32_t> targets;
};

#endif