/**
 * @file elevator.cpp
 * @author Logan Caffey
 * @brief Elevator class code
 * 
 */

#include <cstdint>
#include <vector>
#include "elevator.hpp"

Elevator::Elevator(const int32_t currentFloor){
    this->currentFloor = currentFloor;
    travelTime = 0;
    visited.push_back(currentFloor);
}

void Elevator::Move(const int32_t targetFloor){
    if (targetFloor == currentFloor){ //dont move if at target
        return;
    }
    if (targetFloor > currentFloor){ //move up  iuf target is above current
        travelTime += (targetFloor - currentFloor) * 10;
    }
    else{ //move down if target is below current
        travelTime += (currentFloor - targetFloor) * 10;
    }
    currentFloor = targetFloor;
    visited.push_back(currentFloor);
}

void Elevator::AddDestination(const int32_t targetFloor){
    targets.push_back(targetFloor);
}

void Elevator::VisitAll(){
    for (const int32_t target : targets){
        Move(target);
    }
    targets.clear();
}

int32_t Elevator::GetCurrentFloor() const{
    return currentFloor;
}

uint32_t Elevator::GetTravelTime() const{
    return travelTime;
}

std::vector<int32_t> Elevator::GetVisited() const{
    return visited;
}

std::vector<int32_t> Elevator::GetTargets() const{
    return targets;
}