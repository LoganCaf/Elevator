# Elevator (C++)

Elevator simulator with unit tests (Catch2).

## Build & Run

```
cmake -S . -B build
cmake --build build
./build/Elevator
```

When prompted, choose whether to run FIFO scheduling (`VisitAll`) or a greedy nearest-next-stop scheduler (`VisitAllNearest`).

## Tests

```
cmake -S . -B build
cmake --build build
ctest --test-dir build
```
