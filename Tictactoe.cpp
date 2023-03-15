#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int n = 3; // The size of the board

vector<string> board(n); // The Tic-Tac-Toe board

// Check if a player has won by getting three in a row
bool checkRows(char player) {
    for (int i = 0; i < n; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }
    return false;
}

// Check if a player has won by getting three in a column
bool checkCols(char player) {
    for (int i = 0; i < n; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    return false;
}

// Check if a player has won by getting three in a diagonal
bool checkDiags(char player) {
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    return false;
}

// Check if the board is full (i.e. there are no empty cells)
bool checkFull() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == '.') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    // Read the board from the input
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    int countX = 0, countO = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 'X') {
                countX++;
            } else if (board[i][j] == '0') {
                countO++;
            }
        }
    }

    // Check if the board is valid
    if (countX == countO || countX == countO + 1) {
        bool xWins = checkRows('X') || checkCols('X') || checkDiags('X');
        bool oWins = checkRows('0') || checkCols('0') || checkDiags('0');
        if (xWins && oWins) {
            cout << "illegal" << endl;
        } else if (xWins) {
            if (countX == countO + 1) {
                cout << "the first player won" << endl;
            } else {
                cout << "illegal" << endl;
            }
        } else if (oWins) {
            if (countX == countO) {
                cout << "the second player won" << endl;
            } else {
                cout << "illegal" << endl;
            }
        } else {
            if (checkFull()) {
                cout << "draw" << endl;
            } else {
                if (countX == countO + 1) {
                    cout << "first" << endl;
                } else {
