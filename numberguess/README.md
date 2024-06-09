# Number Guessing Game

## Overview

This project is a simple number guessing game developed in C++ as part of my internship task at CodSoft. The game randomly generates a number between 1 and 100, and the player is prompted to guess the number. After each guess, the game provides hints whether the guessed number is too high or too low. The game continues until the player correctly guesses the number.

## Features

- Random number generation between 1 and 100.
- Interactive user input.
- Feedback on each guess to indicate if it is too high, too low, or correct.
- Looping structure to allow continuous guessing until the correct number is found.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., GCC, Clang)
- Basic understanding of C++ programming

### Installation

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/number-guessing-game.git
    ```
2. Navigate to the project directory:
    ```sh
    cd number-guessing-game
    ```

### Building and Running

1. Compile the code using a C++ compiler:
    ```sh
    g++ -o guessing_game guessing_game.cpp
    ```
2. Run the compiled program:
    ```sh
    ./guessing_game
    ```

## How to Play

1. Upon starting the game, you will be prompted to enter a number between 1 and 100.
2. Enter your guess and press Enter.
3. The game will provide feedback:
    - "Try a bigger number" if your guess is too low.
    - "Try a smaller number" if your guess is too high.
    - "You are right!!!!" if your guess is correct.
4. Continue guessing until you correctly guess the number.
5. Enter `0` to exit the game at any time.

## Acknowledgements

- Developed as part of an internship task at CodSoft.
- Inspired by basic number guessing game algorithms.

