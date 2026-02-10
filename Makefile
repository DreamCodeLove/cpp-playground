# Compiler and Flags
CXX      := g++
CXXFLAGS := -std=c++20 -Wall -Wextra -O2
SRC_DIR  := src
BUILD_DIR := build

# Default target: show usage
help:
	@echo "Usage: make run file=hello.cpp"
	@echo "Executables are stored in the /$(BUILD_DIR) directory."

# Rule to compile and run
run: $(BUILD_DIR)/$(basename $(file))
	@./$(BUILD_DIR)/$(basename $(file))

# Rule to build the executable
$(BUILD_DIR)/%: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	@echo "Compiling $<..."
	@$(CXX) $(CXXFLAGS) $< -o $@

# Create build directory if it doesn't exist
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

# Clean up build artifacts
clean:
	@rm -rf $(BUILD_DIR)
	@echo "Build directory cleaned."

.PHONY: help run clean
