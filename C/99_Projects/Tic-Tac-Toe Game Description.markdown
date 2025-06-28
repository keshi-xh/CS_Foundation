# Tic-Tac-Toe Game Project

## Overview

This project involves creating a two-player Tic-Tac-Toe game in C using a 3x3 array to represent the game board. The program allows two players to take turns placing their symbols ('X' or 'O') on the board, checks for a winner or a draw, and displays the board after each move. The game is a great way to practice array manipulation, user input handling, and conditional logic in C.

## Features

- **Game Board Representation**: Use a 3x3 array to store the game state, with each cell containing 'X', 'O', or an empty space.
- **Player Input**: Players input row and column numbers (0-2) to place their symbol on the board.
- **Move Validation**: Ensure moves are valid (within bounds and on an empty cell).
- **Win Detection**: Check for a winner by examining rows, columns, and diagonals after each move.
- **Draw Detection**: Declare a draw if all 9 cells are filled without a winner.
- **Board Display**: Show the current state of the board after each move in a clear, grid-like format.

## Suggested Approach

1. **Board Initialization**: Create a 3x3 character array and initialize all cells to an empty space (e.g., ' ').
2. **Display Function**: Write a function to print the board, using lines to separate cells for clarity (e.g., `X | O |`).
3. **Move Handling**: Prompt the current player for row and column inputs, validate the move, and update the board.
4. **Win Check**: Implement a function to check rows, columns, and both diagonals for three identical symbols.
5. **Game Loop**: Alternate between players, update the board, and check for a win or draw after each move. Continue until the game ends (win or draw).
6. **Input Validation**: Ensure the input coordinates are within 0-2 and the chosen cell is empty, prompting the player to retry if invalid.

## Implementation Notes

- Use a 2D char array to represent the 3x3 game board.
- Track the current player ('X' or 'O') and switch after each valid move.
- Use a counter to track the number of moves to detect a draw (9 moves without a winner).
- Modularize the program with functions for displaying the board, validating moves, and checking for a winner to keep the code organized.
- Handle invalid inputs gracefully by prompting the user to try again.

## Extensions

- **Computer Player**: Add a single-player mode where the computer makes random moves or implements a simple AI (e.g., blocking the opponent’s winning move).
- **Custom Board Size**: Allow users to specify a larger board size (e.g., 4x4 or 5x5) and adjust win conditions (e.g., 4 in a row).
- **Replay Option**: Add a feature to restart the game without exiting the program.
- **Score Tracking**: Keep track of wins for each player across multiple games.
- **Graphical Interface**: If using a graphics library (e.g., SDL), render the board visually instead of using text output.

## Learning Outcomes

- Gain experience with 2D arrays and array indexing in C.
- Practice handling user input and validating data.
- Develop skills in structuring a program with multiple functions.
- Understand game logic, including win conditions and state management.

This project is an engaging way to apply array concepts in a practical, interactive context while building a familiar game.
