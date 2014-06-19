CC=g++
BUILD_DIR=./bin
SRC_DIR=./src
CFLAGS=-std=c++11 -g
SOURCES=$(SRC_DIR)/raytracer.cpp $(SRC_DIR)/surfaces.cpp $(SRC_DIR)/scene.cpp $(SRC_DIR)/vec.cpp $(SRC_DIR)/main.cpp
EXECUTABLE=$(BUILD_DIR)/trace

raytracer: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(EXECUTABLE)