# Tic-Tac-Toe Game - CodSoft Internship Project

## Overview
This project is a simple console-based Tic-Tac-Toe game developed for the CodSoft Internship. The game allows two players, "X" and "O", to play against each other. The players take turns to mark spaces on a 3x3 grid, and the game checks for a win or a draw after each move. Players can choose to play multiple games consecutively.

## Features
- **Game Board**: A 3x3 grid that represents the game board.
- **Players**: Two players are assigned the markers "X" and "O".
- **Display Board**: The current state of the board is displayed after each move.
- **Player Input**: Prompts the current player to enter their move.
- **Update Board**: The game board is updated with the player's move.
- **Check for Win**: The game checks if the current player has won.
- **Check for Draw**: The game determines if the game is a draw.
- **Switch Players**: Alternates turns between "X" and "O".
- **Display Result**: Shows the result of the game (win, draw, or ongoing).
- **Play Again**: Asks if the players want to play another game.

## How to Play
1. **Game Start**: The game starts by displaying an empty 3x3 grid.
2. **Player Turn**: The current player is prompted to enter a number (1-9) corresponding to the grid position they want to mark.
3. **Update Board**: The board is updated with the player's marker ("X" or "O").
4. **Check for Win or Draw**: After each move, the game checks for a win or a draw.
5. **Switch Players**: If there is no win or draw, the game switches to the other player's turn.
6. **End Game**: If there is a win or draw, the game displays the result and asks if the players want to play again.

## Requirements
- C++ Compiler
- Basic knowledge of C++ programming

## How to Run
1. **Compile the code**: Use a C++ compiler to compile the code.
   ```sh
   g++ -o TicTacToe ConsoleApplication3.cpp
   ```
2. **Run the executable**: Run the compiled executable.
   ```sh
   ./TicTacToe
   ```
