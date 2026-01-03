CXX := clang++
CXXFLAGS := -std=c++17 -Wall -Wextra -Wpedantic

INCLUDES := -Iinclude -Iexternal/include
LIBDIRS := -Lexternal/lib

LIBS := -lsfml-graphics -lsfml-window -lsfml-system

SRC := src/chess.cpp
BIN := bin/chess

all: $(BIN)

$(BIN): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) $(INCLUDES) $(LIBDIRS) $(LIBS) -o $(BIN)

clean:
	rm -f $(BIN)
