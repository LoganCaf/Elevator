# Elevator
Elevator simulator

Assumptions:
The Floor Range is (-2147483648 , 2147483647)
The total travel time does not exceed 4294967295 and can't be negative.

Unimplemented features:
The elevator won't move until all the destinations have been selected. i.e. there is no multithreading.

Type of Call Button:
The Call button is single, not up/down, as there is no limit on going up or down floors when choosing destinations.

Building:
The program is already build by default but to rebuild it you can do so in the build directory via "cmake --build ." as this project uses cmake.

Usage:
The main Executable is Elevator and the test Executable is ElevatorTests.
When running Elevator, you will first be asked to enter whatn number floor you wich to start at. Then you will be asked to provide a comma seperated list of floors to visit. Finally, it will output the total travel time and the floors you have visited (including the one you start at).
When running ElevatorTests, it asks for no input and outputs which tests fail and how many pass or fail (All are currently passing, so no failing information is shown).
