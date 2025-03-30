/**
 * @file elevator.hpp
 * @author Logan Caffey
 * @brief Elevator definitions
 * 
 */

#ifndef ELEVATOR_HPP
#define ELEVATOR_HPP

#include <cstdint>
#include <vector>

/**
 * @brief An Elevator Class that simulates an elevator
 * 
 */
class Elevator{
    public:
    /**
     * @brief Construct a new Elevator object
     * 
     * @param currentFloor 
     */
    Elevator(const int32_t currentFloor);
    /**
     * @brief moves the elevator to the taret floor
     * 
     * @param targetFloor 
     */
    void Move(const int32_t targetFloor);
    /**
     * @brief adds a destination/target to the elevator
     * 
     * @param targetFloor 
     */
    void AddDestination(const int32_t targetFloor);
    /**
     * @brief tells the elevator to visit all target floors in its current list
     * 
     */
    void VisitAll();

    /**
     * @brief Get the Travel Time object
     * 
     * @return uint32_t 
     */
    uint32_t GetTravelTime() const;
    /**
     * @brief Get the Visited object
     * 
     * @return std::vector<int32_t> 
     */
    std::vector<int32_t> GetVisited() const;
    // needed for testing
    /**
     * @brief Get the Current Floor object
     * 
     * @return int32_t 
     */
    int32_t GetCurrentFloor() const;
    /**
     * @brief Get the Targets object
     * 
     * @return std::vector<int32_t> 
     */
    std::vector<int32_t> GetTargets() const;
    private:
    int32_t currentFloor; // the floor the elevator is on
    uint32_t travelTime; // the total travel thime the elevator has done thus far
    std::vector<int32_t> visited; // a vector of visited floors in order
    std::vector<int32_t> targets; // a vector of to be visited floors in order
};

#endif