CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET = banking_system
OBJECTS = main.o Account.o Bank.o DataStructures.o

all: $(TARGET)

$(TARGET): $(OBJECTS)
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

main.o: main.cpp Account.hpp Bank.hpp DataStructures.hpp
    $(CXX) $(CXXFLAGS) -c main.cpp

Account.o: Account.cpp Account.hpp
    $(CXX) $(CXXFLAGS) -c Account.cpp

Bank.o: Bank.cpp Bank.hpp Account.hpp
    $(CXX) $(CXXFLAGS) -c Bank.cpp

DataStructures.o: DataStructures.cpp DataStructures.hpp
    $(CXX) $(CXXFLAGS) -c DataStructures.cpp

clean:
    rm -f $(TARGET) $(OBJECTS)
