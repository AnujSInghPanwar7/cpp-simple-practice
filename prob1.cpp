// // Rock Paper Scissors
// // Let's play! You have to return which player won! In case of a draw return Draw!.

// // Examples(Input1, Input2 --> Output):

// // "scissors", "paper" --> "Player 1 won!"
// // "scissors", "rock" --> "Player 2 won!"
// // "paper", "paper" --> "Draw!"

#include <iostream>

using namespace std;

string rps(const string& p1, const string& p2)
{
    if (p1 == p2)
        return "Draw!";
    if ((p1 == "scissors" && p2 == "paper") ||
        (p1 == "paper" && p2 == "rock") ||
        (p1 == "rock" && p2 == "scissors"))
        return "Player 1 won!";
    else
        return "Player 2 won!";
}

int main()
{
    string player1, player2;
    cout << "Enter Player 1's choice (rock, paper, or scissors): ";
    cin >> player1;
    cout << "Enter Player 2's choice (rock, paper, or scissors): ";
    cin >> player2;
    cout << rps(player1, player2) << endl;
    return 0;
}