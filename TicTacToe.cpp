#include "TicTacToe.h"
#include <iostream>
#include<time.h>
#include <cstdlib>
#include <cstdio>
using namespace std;
TicTacToe::TicTacToe(){
    srand(time(0));
    n = 9;
    turn = rand() % 10;
    totalTurns = 0;
    if(turn % 2 == 0)
        playerTurn = true;
    else
        playerTurn = false;
    for(int i = 0; i < n; i++){
        board[i] = 0;
    }
}
bool TicTacToe::getTurn(){
    return playerTurn;
}
void TicTacToe::printTurn(){
    if(playerTurn == true)
        cout << "Your move: Enter row # followed by column # that you wish to move in" << endl;
    else if (playerTurn == false)
        cout << "Computers move: " << endl;
}

