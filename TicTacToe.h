

#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <iostream>
class TicTacToe{
private:
    bool playerTurn;
    int turn;
    int difficulty;
    char input[];
    int n;
    int board[];
    int totalTurns;
public:
    TicTacToe();
    const int getBoard();
    const int getSize();
    char getInput();
    int getDifficulty();
    bool getTurn();
    bool winHorizontal(const int n);
    bool winVertical(const int n);
    bool winDiagonal(const int n);
    bool catGame();
    void displayBoard(const int n);
    bool emptyCheck(const int n);
    void easyLevel();
    void mediumLevel();
    void hardLevel();
    void printTurn();
};

#endif /* TICTACTOE_H */

