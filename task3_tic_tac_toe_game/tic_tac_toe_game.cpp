// intrenship-task-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
char Board[3][3] = { {' ',' ',' '},{' ',' ',' '} ,{' ',' ',' '} };
char turn = 'X';
int row, col;
void displayboard();
bool alreadyfilledboard();
void turn_msg();
void changeturn();
void player_choise();
bool gameover();
void checkwin();
int main()
{
    while (!gameover())
    {
        system("cls");
        displayboard();
        turn_msg();
        player_choise();
    }
    displayboard(); 
    checkwin(); // Check for a win or draw after each player's move
    return 0;
}
 



void changeturn()
{
    if(!alreadyfilledboard())
    {
        if (turn == 'X')
        {
            Board[row][col] = 'X';
            turn = 'O';
        }
        else if (turn == 'O')
        {
            Board[row][col] = 'O';
            turn = 'X';
        }
    }
    else
    {
        cout << "NOT EMPTY ------------TRY AGAIN()-------\n\n";
        player_choise();
    }

}
void displayboard()
{
    system("cls");
    cout << "\t\t\tINTERNSHIP TASK 3___________\n";

    cout << "\t\t\tTIC TAC TOE GAME CODING IN C++_______\n\n";
    cout << "\n\n\n";
    cout << "\t\t _________ _________ _________\n";
    cout << "\t\t|         |         |         |\n";
    cout << "\t\t|   " << Board[0][0] << "     |    " << Board[0][1] << "    |    " << Board[0][2] << "    |\n";
    cout << "\t\t|_________|_________|_________|\n";
    cout << "\t\t|         |         |         |\n";
    cout << "\t\t|   " << Board[1][0] << "     |    " << Board[1][1] << "    |    " << Board[1][2] << "    |\n";
    cout << "\t\t|_________|_________|_________|\n";
    cout << "\t\t|         |         |         |\n";
    cout << "\t\t|   " << Board[2][0] << "     |    " << Board[2][1] << "    |    " << Board[2][2] << "    |\n";
    cout << "\t\t|_________|_________|_________|\n";
    cout << "\n\n";
    /*char Arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "-";
        }
        cout << endl;
    }*/
}
bool alreadyfilledboard()
{
     return (Board[row][col] != ' ');
}
void turn_msg()
{
    if (turn == 'X')
    {
        cout << "PLAYER1 [X] TURN'S\n";
    }
    if (turn == 'O')
    {
        cout << "PLAYER2 [O] TURN'S\n";
    }
}
void player_choise()
{
    int choise;
    cin >> choise;
    switch (choise)
    {
    case 1:
        row = 0; col = 0; break;
    case 2:
        row = 0; col = 1; break;
    case 3:
        row = 0; col = 2; break;
    case 4:
        row = 1; col = 0; break;
    case 5:
        row = 1; col = 1; break;
    case 6:
        row = 1; col = 2; break;
    case 7:
        row = 2; col = 0; break;
    case 8:
        row = 2; col = 1; break;
    case 9:
        row = 2; col = 2; break;
    default:
        cout << "INVALID ENTRY TRY AGAIN--------------------\n\n\n";
    }
    changeturn();
}
bool gameover()
{
    // Check for a win
    for (int i = 0; i < 3; i++)
    {
        if (Board[i][0] != ' ' && Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2])
            return true;
    }

    // vertical win
    for (int j = 0; j < 3; j++)
    {
        if (Board[0][j] != ' ' && Board[0][j] == Board[1][j] && Board[0][j] == Board[2][j])
            return true;
    }

    //  diagonal win
    if ((Board[0][0] != ' ' && Board[0][0] == Board[1][1] && Board[0][0] == Board[2][2]) ||
        (Board[0][2] != ' ' && Board[0][2] == Board[1][1] && Board[0][2] == Board[2][0]))
        return true;

    // If none of the above conditions are met, it's not a win yet
    return false;
}



void checkwin()
{
    if (turn == 'X')
    {
        cout << "\n\n\t\tPlayer 2[0] wins! Congratulations!\n\n\n";
    }
    else if (turn == 'O')
    {
        cout << "\n\t\tPlayer1 [X] wins! Congratulations!\n\n\n";
    }
    else
    {
        cout << "\n\n\t\tIt's a draw. Good game!\n\n";
    }
}
