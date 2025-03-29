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

    
    uint32_t GetTravelTime() const;
    std::vector<int32_t> GetVisited() const;
    // needed for testing
    int32_t GetCurrentFloor() const;
    std::vector<int32_t> GetTargets() const;
    private:
    int32_t currentFloor;
    uint32_t travelTime;
    std::vector<int32_t> visited;
    std::vector<int32_t> targets;
};

#endif