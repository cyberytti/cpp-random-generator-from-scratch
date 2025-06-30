# Pseudo Random Number Generator (C++)

This project provides a basic implementation of a pseudo random number generator using C++ and system time.

## Features

* Generates pseudo-random numbers based on the current system time
* Simple and lightweight implementation
* Uses standard C++ and POSIX headers

## Files

* `random_number_generator.cpp`: Contains the implementation of the random number generator and a demo in `main()`.

## Build Instructions

To compile the program:

```bash
clang++ -std=c++11 -o random_generator random_generator.cpp
```

## Usage

After building the project, run the executable:

```bash
./random_generator
```

This will print a pseudo-random number to the console.

## Requirements

* C++ compiler (e.g., g++, clang++)
* POSIX-compatible system (for `<sys/time.h>`)


