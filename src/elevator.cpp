#include <cstdint>
#include <vector>
#include "elevator.hpp"

Elevator::Elevator(const uint16_t currentFloor){
    this->currentFloor = currentFloor;
    travelTime = 0;
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