#include <cstdint>
#include <vector>
#include "elevator.hpp"

Elevator::Elevator(const int32_t currentFloor){
    this->currentFloor = currentFloor;
    travelTime = 0;
    visited.push_back(currentFloor);
}

void Elevator::Move(const int32_t targetFloor){

}

void Elevator::AddDestination(const int32_t targetFloor){

}

void Elevator::VisitAll(){

}

int32_t Elevator::GetCurrentFloor(){
    return currentFloor;
}

uint32_t Elevator::GetTravelTime(){
    return travelTime;
}

std::vector<int32_t> Elevator::GetVisited(){
    return visited;
}

std::vector<int32_t> Elevator::GetTargets(){
    return targets;
}