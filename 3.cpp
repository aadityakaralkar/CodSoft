#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void displayBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << ' ';
        }
        cout << endl;
    }
}
bool checkWin(const vector<vector<char>>& board, char player) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true; 
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true; 
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    return false;
}
int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';
    int moves = 0;

    cout << "Welcome to Tic-Tac-Toe!\n";

    do {
        displayBoard(board);
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;
        if (board[row][col] == ' ') {
            board[row][col] = currentPlayer;
            moves++;
            if (checkWin(board, currentPlayer)) {
                displayBoard(board);
                cout << "Player " << currentPlayer << " won!\n";
                break;
            }
            if (moves == 9) {
                displayBoard(board);
                cout << "It's a draw!\n";
                break;
            }
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            cout << "That cell is already occupied. Try again.\n";
        }
    } while (true);

    cout << "Would you want to play another game?\n";

    return 0;
}
