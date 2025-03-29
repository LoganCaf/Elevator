TARGET = Elevator
SRC_FILES = main.cpp

CXX = g++
CFLAGS = -Wall -g -std=c++20
OBJECTS = $(SRC_FILES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) -o $@ $^

.cpp.o:
	$(CXX) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(TARGET) $(OBJECTS)

# DEPENDENCIES
main.o: main.cpp
