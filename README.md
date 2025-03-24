# Fillit

Fillit is a program that takes a file containing Tetrimino pieces as input and finds the smallest possible square arrangement to fit all the pieces. This project is part of the 42 school curriculum.

## Description

Fillit is designed to arrange Tetriminos (Tetris pieces) in the smallest possible square configuration. The program uses backtracking algorithms to find the optimal solution efficiently.

### Features

- Reads Tetrimino pieces from an input file
- Validates input pieces for correct format and shape
- Finds the smallest possible square that can contain all pieces
- Outputs the solution with pieces labeled from 'A' onwards

## Requirements

- GCC compiler
- Make
- Unix-based system

## Installation

Clone the repository and compile the program:

```bash
git clone [repository-url]
cd fillit
make
```

## Usage

```bash
./fillit [file]
```

The input file should contain Tetriminos in a specific format:
- Each Tetrimino is precisely 4 lines of 4 characters
- Each character must be either '.' (empty) or '#' (block)
- Each Tetrimino must have exactly 4 blocks
- Tetriminos are separated by a newline

Example input file:
```
....
##..
.#..
.#..

....
####
....
....

#...
#...
#...
#...

....
##..
.##.
....
```
