# Tic_Tac-Toe
Tic-Tac-Toe game using C

A simple and interactive Tic-Tac-Toe game written in C, played in the terminal with colored X and O symbols, player names, and clean board updates. This project is great for beginners learning C fundamentals and console-based UI.

*Features*

-> Two-player mode (Player names supported)
-> Colored symbols
X → Red
O → Blue
-> Move validation (Prevents selecting already-filled boxes)
-> Win detection for all 8 winning combinations
-> Board refresh animation using system("clear")
-> Draw detection when all 9 cells are filled
-> Clean function structure
-> printboard()
-> printsign()
-> wincheck()

*How It Works*

The game begins by asking both players to enter their names.
Players take turns entering a position (0–8).
The selected position is marked with:
X for Player 1
O for Player 2
After every move, the board is refreshed and displayed with colors.

The game ends when:
A player wins, or
All positions are filled → Match Draw
