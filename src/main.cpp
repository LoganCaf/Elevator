/**
 * @file main.cpp
 * @author Logan Caffey
 * @brief Main function
 * 
 */

#include <iostream>
#include <cstdint>
#include <string>
#include "elevator.hpp"

using namespace std;

int main(){
    int32_t start;
    cout << "Enter your starting floor and hit Enter (floor range:-2147483648 - 2147483647)\n";
    cin >> start;
    Elevator elevator(start);

    string floors;
    cout << "Enter the floors you want to go to seperated by commas\n";
    cin >> floors;
    
    string currentFloor;
    for (const char c : floors){
        if (c == ','){
            elevator.AddDestination(stoi(currentFloor));
            currentFloor = "";
        }
        else{
            currentFloor += c;
        }
    }
    elevator.AddDestination(stoi(currentFloor));
    elevator.VisitAll();
    cout << "travel time: " << elevator.GetTravelTime() << " floors visited: ";
    cout << elevator.GetVisited().at(0);
    for (uint32_t ind=1;ind<elevator.GetVisited().size();++ind){
        cout << ',' << elevator.GetVisited().at(ind);
    }
    cout << '\n';


    return 0;
}