# Random-Vowel-ratio-Generator

## Technical Notes
- All character arrays contain only uppercase letters (A-Z)
- The program dynamically allocates memory for each character array and properly frees it
- Random number generation is deterministic based on the provided seed
- The project structure follows a modular design with separate interface and implementation
## Overview

This project analyzes the statistical distribution of uppercase vowels in randomly generated character arrays. It calculates the average ratio of vowels to non-vowels across multiple iterations and tracks which iteration contains the maximum number of vowels.

## How It Works
1. A random seed is provided as a command-line argument
2. The program runs between 50-100 iterations (randomly determined)
3. In each iteration:
   - A random character array of length 150-200 is generated with uppercase letters
   - The program counts uppercase vowels (A, E, I, O, U) in the array
   - The vowel-to-consonant ratio is calculated and added to a running total
4. The program tracks which iteration had the highest vowel count
5. Finally, it returns the average vowel-to-non-vowel ratio across all iterations


## Output
The program outputs:
- The seed value used
- The number of iterations performed
- The iteration with the maximum vowel count
- The average vowel-to-non-vowel ratio

## Files
- **Initiator.c**: Main entry point that takes a seed value and calls the Worker module
- **Worker.c**: Contains the core analysis functions
- **Worker.h**: Header file defining the interface between modules
- **Makefile**: Provides build commands for the project

## Each Files Function

### Initiator.c
- Serves as the main entry point for the program
- Takes a seed value as a command-line argument
- Initializes the random number generator with the provided seed
- Calls <span style="color:yellow">get_running_ratio()</span> from the Worker module
- Displays the seed value and final running ratio

### Worker.c
- Implements three main functions:
  - <span style="color:yellow">random_in_range()</span>: Generates random integers within specified bounds
  - <span style="color:yellow">get_vowel_count()</span>: Scans a character array and counts uppercase vowels (A, E, I, O, U)
  - <span style="color:yellow">get_running_ratio()</span>: Creates multiple random character arrays, counts vowels in each, tracks which iteration had the maximum vowel count, and calculates the average ratio of vowels to non-vowels

### Worker.h
- Defines the interface for the Worker module
- Declares the three functions implemented in Worker.c:
  - <span style="color:yellow">random_in_range()</span>
  - <span style="color:yellow">get_vowel_count()</span>
  - <span style="color:yellow">get_running_ratio()</span>

### Makefile
- Specifies the compiler (gcc) and compilation commands
- Provides three targets:
  - <span style="color:cyan">Default</span>: Compiles the source files into an executable named "Initiator"
  - <span style="color:cyan">tar</span>: Creates a tarball of all project files
  - <span style="color:cyan">clean</span>: Removes the executable and object files


## Usage
```bash
# Compile the program
make

# Run with a seed value
./Initiator <seed_value>

# Example
./Initiator 42

# Clean up compiled files
make clean

# Create a tarball of the project
make tar
```


