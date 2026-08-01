#include <iostream>
using namespace std;

// Function to display the board
void displayBoard(char board[3][3])
{
    cout << "\n";
    cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---------" << endl;
    cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---------" << endl;
    cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    cout << "\n";
}

// Function to check if someone has won
bool checkWinner(char board[3][3])
{
    // Check rows
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;
    }

    // Check columns
    for(int i = 0; i < 3; i++)
    {
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return true;
    }

    // Check diagonals
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;

    if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;

    return false;
}

int main()
{
    char board[3][3] =
    {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    char player = 'X';
    int choice;
    int row, col;
    int moves = 0;

    while(true)
    {
        displayBoard(board);

        cout << "Player " << player << ", enter a position (1-9): ";
        cin >> choice;

        switch(choice)
        {
            case 1: row = 0; col = 0; break;
            case 2: row = 0; col = 1; break;
            case 3: row = 0; col = 2; break;
            case 4: row = 1; col = 0; break;
            case 5: row = 1; col = 1; break;
            case 6: row = 1; col = 2; break;
            case 7: row = 2; col = 0; break;
            case 8: row = 2; col = 1; break;
            case 9: row = 2; col = 2; break;

            default:
                cout << "Invalid choice!\n";
                continue;
        }

        // Check if the position is already used
        if(board[row][col] == 'X' || board[row][col] == 'O')
        {
            cout << "That position is already taken.\n";
            continue;
        }

        // Place player's mark
        board[row][col] = player;
        moves++;

        // Check winner
        if(checkWinner(board))
        {
            displayBoard(board);
            cout << "Player " << player << " wins!\n";
            break;
        }

        // Check draw
        if(moves == 9)
        {
            displayBoard(board);
            cout << "It's a draw!\n";
            break;
        }

        // Change player
        if(player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    return 0;
}