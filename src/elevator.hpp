#ifndef ELEVATOR_HPP
#define ELEVATOR_HPP

#include <cstdint>
#include <vector>


class Elevator{
    public:
    Elevator(const uint16_t currentFloor);
    void Move(const uint16_t targetFloor);
    void AddDestination(const uint16_t targetFloor);
    void VisitAll();

    // needed for testing
    uint16_t GetCurrentFloor();
    uint32_t GetTravelTime();
    std::vector<uint16_t> GetVisited();
    std::vector<uint16_t> GetTargets();
    private:
    uint16_t currentFloor;
    uint32_t travelTime;
    std::vector<uint16_t> visited;
    std::vector<uint16_t> targets;
};

Elevator::Elevator(const uint16_t currentFloor){

}

void Elevator::Move(const uint16_t targetFloor){

}

void Elevator::AddDestination(const uint16_t targetFloor){

}

void Elevator::VisitAll(){

}

uint16_t Elevator::GetCurrentFloor(){
    return currentFloor;
}

uint32_t Elevator::GetTravelTime(){
    return travelTime;
}

std::vector<uint16_t> Elevator::GetVisited(){
    return visited;
}

std::vector<uint16_t> Elevator::GetTargets(){
    return targets;
}

#endif