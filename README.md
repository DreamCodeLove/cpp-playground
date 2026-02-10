# C++ Feature Lab
![License: Unlicense](https://img.shields.io/badge/license-Unlicense-blue.svg)

A collection of standalone C++ programs for practicing language features, syntax, and the Standard Template Library (STL).

## Overview
This repository contains individual `.cpp` files, each acting as a self-contained experiment. The goal is to explore modern C++ (C++17/20) through practical, isolated examples.

## Project Structure
* `src/`: Contains all standalone `.cpp` source files.
* `build/`: (Auto-generated) Contains the compiled executables.
* `Makefile`: Handles compilation and execution logic.

## How to Run
Use the included `Makefile` to compile and run any file from the `src` directory automatically.

```bash
# General syntax:
# make run file=<filename.cpp>

# Example:
make run file=smart_pointers.cpp

# Clean-up
make clean
```

## References
* [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
