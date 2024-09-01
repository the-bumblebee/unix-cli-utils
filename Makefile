SRC_DIR = src
BIN_DIR = bin

SRCS=$(wildcard $(SRC_DIR)/*.cpp)

BINS=$(patsubst $(SRC_DIR)/%.cpp, $(BIN_DIR)/%, $(SRCS))

all: $(BINS)

$(BIN_DIR)/%: $(SRC_DIR)/%.cpp
	@mkdir -p $(BIN_DIR)
	g++ -o $@ $<

clean:
	rm -rf $(BIN_DIR)/*
