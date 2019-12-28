#pragma once
#include <stdio.h>
#include <stdlib.h>
#define exit 3
#define MAX(x, y) (((x) > (y)) ? (x) : (y))    

    
   int turn;
   int numMoves;
   int temporary;
   char gameBoard[6][15];
   int isWinner;
   int currRowForCol1;
   int currRowForCol3;
   int currRowForCol5;
   int currRowForCol7;
   int currRowForCol9;
   int currRowForCol11;
   int currRowForCol13 ;
   void printMatrix(char mat[6][15]);
   void undo(char gameBoard[6][15],int help[6][15]);
   void playerX(char gameBoard[6][15]);
   void playerO(char gameBoard[6][15]);
   void startGame();
   int gameBoardisFull();
   int is4inARow(char gameBoard[6][15],char sym);
   int isHelpEmpty(int mat[6][15]);
   void FourInARowGame();