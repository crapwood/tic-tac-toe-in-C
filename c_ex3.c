#include "c_ex3.h"
    int help[6][15];
    void printMatrix(char mat[6][15]){
        int i,j;
        for (i = 0; i < 6; i++) {
            printf("                                                                ");
            for (j = 0; j < 15; j++) {
                printf("%c",mat[i][j]);
            }
            printf("\n");
        }
    }
    int isHelpEmpty(int mat[6][15]){
          int i,j;
         for (i = 0; i < 6; i++) {
            for (j = 0; j < 15; j++) {
                if(mat[i][j] != 0){
                    return 1;
                }
            }
        }
        return 0;
    }
    void undo(char gameBoard[6][15],int checkLastMove[6][15]){
        int max = checkLastMove[0][0];
        int row,col,i,j;
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 15; j++) {
               if(checkLastMove[i][j] > max){
                   max = checkLastMove[i][j];
                   row = i;
                   col = j;
               }
            }
        }
        gameBoard[row][col] =' ';
        checkLastMove[row][col] = 0;
        numMoves--;
        temporary =col;
    }
    void playerX(char gameBoard[6][15]){
        while(turn == 0){
            int temp;
            printf("                                                                 1 2 3 4 5 6 7\nPlayer X, please enter a column number (or 0 to undo): ");
            if(scanf("%d",&temp) != 1){
                isWinner=1;
                turn =exit;
                printf("Invalid input, bye-bye!");
            }
            else{
            int col1,col3,col5,col7,col9,col11,col13;
            if(temp>=0 && temp<=7){
                switch(temp){
                case 1 :
                    col1 = 1;
                    if(currRowForCol1>=0){
                    gameBoard[currRowForCol1][col1] = 'x';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol1][col1] = numMoves;
                    currRowForCol1--;
                    turn =1;
                     if(is4inARow(gameBoard,'x')==1){
                            printf("Player X wins!!!!");
                            isWinner=1;
                        }
                    }
                    else{
                        printf("Invalid input, this column is full. Please choose another one\n");
                        printMatrix(gameBoard);
                        turn =0;
                    }
                    break;
                case 2 :
                    col3 = 3;
                    if(currRowForCol3>=0){
                    gameBoard[currRowForCol3][col3] = 'x';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol3][col3] = numMoves;
                    currRowForCol3--;
                    turn =1;
                     if(is4inARow(gameBoard,'x')==1){
                    printf("Player X wins!!!!");
                    isWinner=1;
                }
                    }
                    else{
                        printf("Invalid input, this column is full. Please choose another one\n");
                        printMatrix(gameBoard);
                        turn =0;
                    }
                   break;
                case 3 :
                     col5 = 5;
                    if(currRowForCol5>=0){
                    gameBoard[currRowForCol5][col5] = 'x';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol5][col5] = numMoves;
                    currRowForCol5--;
                    turn =1;
                     if(is4inARow(gameBoard,'x')==1){
                    printf("Player X wins!!!!");
                    isWinner=1;
                }
                    }
                    else{
                        printf("Invalid input, this column is full. Please choose another one\n");
                        printMatrix(gameBoard);
                        turn =0;
                    break;
                case 4 :
                     col7 = 7;
                    if(currRowForCol7>=0){
                    gameBoard[currRowForCol7][col7] = 'x';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol7][col7] = numMoves;
                    currRowForCol7--;
                    turn =1;
                     if(is4inARow(gameBoard,'x')==1){
                    printf("Player X wins!!!!");
                    isWinner=1;
                }
                    }
                    else{
                        printf("Invalid input, this column is full. Please choose another one\n");
                        printMatrix(gameBoard);
                        turn =0;
                    }
                    break;
                case 5 :
                    col9 = 9;
                    if(currRowForCol9>=0){
                    gameBoard[currRowForCol9][col9] = 'x';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol9][col9] = numMoves;
                    currRowForCol9--;
                    turn =1;
                     if(is4inARow(gameBoard,'x')==1){
                    printf("Player X wins!!!!");
                    isWinner=1;
                }
                    }
                    else{
                        printf("Invalid input, this column is full. Please choose another one\n");
                        printMatrix(gameBoard);
                        turn =0;
                    }
                    break;
                case 6 :
                    col11 = 11;
                    if(currRowForCol11>=0){
                    gameBoard[currRowForCol11][col11] = 'x';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol11][col11] = numMoves;
                    currRowForCol11--;
                    turn =1;
                     if(is4inARow(gameBoard,'x')==1){
                    printf("Player X wins!!!!");
                    isWinner=1;
                }
                    }
                    else{
                        printf("Invalid input, this column is full. Please choose another one\n");
                        printMatrix(gameBoard);
                        turn =0;
                    }
                    break;
                case 7 :
                    col13 = 13;
                    if(currRowForCol13>=0){
                    gameBoard[currRowForCol13][col13] = 'x';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol13][col13] = numMoves;
                    currRowForCol13--;
                    turn =1;
                     if(is4inARow(gameBoard,'x')==1){
                            printf("Player X wins!!!!");
                            isWinner=1;
                        }
                    }
                    else{
                       printf("Invalid input, this column is full. Please choose another one\n");
                       printMatrix(gameBoard);
                       turn =0;
                    }
                    break;
                case 0 :
                if(isHelpEmpty(help) == 1){
                        undo(gameBoard,help);
                    if(temporary == 1){
                        currRowForCol1++;
                    }
                    else if(temporary == 3){
                        currRowForCol3++;
                    }
                    else if(temporary == 5){
                        currRowForCol5++;
                    }
                    else if(temporary == 7){
                        currRowForCol7++;
                    }
                    else if(temporary == 95){
                        currRowForCol9++;
                    }
                    else if(temporary == 11){
                        currRowForCol11++;
                    }
                    else if(temporary == 135){
                        currRowForCol13++;
                    }
                    printMatrix(gameBoard);
                    turn = 1;
                }
                else{
                        printf("Board is empty - can't undo!\n");
                        printMatrix(gameBoard);
                        turn = 0;
                    }
                    break;
                    }
                }
            }
            else{
                    printf("Invalid input, the number must be between 1 to 7\n");
                    printMatrix(gameBoard);
                }
            } 
        }
    }
    void playerO(char gameBoard[6][15]){
        while(turn == 1){
            int temp=0;
            printf("                                                                 1 2 3 4 5 6 7\nPlayer O, please enter a column number (or 0 to undo): ");
            if(scanf("%d",&temp)!= 1){
                isWinner=1;
                turn =exit;
                printf("Invalid input, bye-bye!");
            }else{
            int col1,col3,col5,col7,col9,col11,col13;
            if(temp>=0 && temp<=7){
            switch(temp){
                case 1 :
                    col1 = 1;
                    if(currRowForCol1>=0){
                    gameBoard[currRowForCol1][col1] = 'o';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol1][col1] = numMoves;
                    currRowForCol1--;
                    turn = 0;
                        if(is4inARow(gameBoard,'o')==1){
                            printf("Player O wins!!!!");
                            isWinner=1;
                        }
                    }
                    else{
                        printf("Invalid input, this column is full. Please choose another one\n");
                        printMatrix(gameBoard);
                        turn =1;
                    }
                    break;
                case 2 :
                    col3 = 3;
                    if(currRowForCol3>=0){
                    gameBoard[currRowForCol3][col3] = 'o';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol3][col3] = numMoves;
                    currRowForCol3--;
                    turn = 0;
                        if(is4inARow(gameBoard,'o')==1){
                            printf("Player O wins!!!!");
                            isWinner=1;
                        }
                    }
                    else{
                        printf("Invalid input, this column is full. Please choose another one\n");
                        printMatrix(gameBoard);
                        turn =1;
                    }
                    break;
                case 3 :
                    col5 = 5;
                    if(currRowForCol5>=0){
                    gameBoard[currRowForCol5][col5] = 'o';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol5][col5] = numMoves;
                    currRowForCol5--;
                    turn = 0;
                     if(is4inARow(gameBoard,'o')==1){
                    printf("Player O wins!!!!");
                    isWinner=1;
                }
                    }
                    else{
                        printf("Invalid input, this column is full. Please choose another one\n");
                        printMatrix(gameBoard);
                        turn =1;
                    }
                    break;
                case 4 :
                    col7 = 7;
                    if(currRowForCol7>=0){
                    gameBoard[currRowForCol7][col7] = 'o';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol7][col7] = numMoves;
                    currRowForCol7--;
                    turn = 0;
                     if(is4inARow(gameBoard,'o')==1){
                    printf("Player O wins!!!!");
                    isWinner=1;
                }
                    }
                    else{
                        printf("Invalid input, this column is full. Please choose another one\n");
                        printMatrix(gameBoard);
                        turn =1;
                    }
                    break;
                case 5 :
                    col9 = 9;
                    if(currRowForCol9>=0){
                    gameBoard[currRowForCol9][col9] = 'o';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol9][col9] = numMoves;
                    currRowForCol9--;
                    turn = 0;
                     if(is4inARow(gameBoard,'o')==1){
                    printf("Player O wins!!!!");
                    isWinner=1;
                }
                    }
                    else{
                        printf("Invalid input, this column is full. Please choose another one\n");
                        printMatrix(gameBoard);
                        turn =1;
                    }
                    break;
                case 6 :
                    col11 = 11;
                    if(currRowForCol11>=0){
                    gameBoard[currRowForCol11][col11] = 'o';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol11][col11] = numMoves;
                    currRowForCol11--;
                    turn = 0;
                     if(is4inARow(gameBoard,'o')==1){
                    printf("Player O wins!!!!");
                    isWinner=1;
                }
                    }
                    else{
                        printf("Invalid input, this column is full. Please choose another one\n");
                        printMatrix(gameBoard);
                        turn =1;
                    }
                    break;
                case 7 :
                    col13 = 13;
                    if(currRowForCol13>=0){
                    gameBoard[currRowForCol13][col13] = 'o';
                    printMatrix(gameBoard);
                    numMoves++;
                    help[currRowForCol13][col13] = numMoves;
                    currRowForCol13--;
                    turn = 0;
                     if(is4inARow(gameBoard,'o')==1){
                    printf("Player O wins!!!!");
                    isWinner=1;
                }
                    }
                    else{
                        printf("Invalid input, this column is full. Please choose another one\n");
                        printMatrix(gameBoard);
                        turn =1;
                    }
                    break;
                case 0 :
                if(isHelpEmpty(help) == 1){
                        undo(gameBoard,help);
                    if(temporary == 1 && currRowForCol1<=5){
                        currRowForCol1++;
                    }
                    else if(temporary == 3 && currRowForCol3<=5){
                        currRowForCol3++;
                    }
                    else if(temporary == 5 && currRowForCol5<=5){
                        currRowForCol5++;
                    }
                    else if(temporary == 7 && currRowForCol7<=5){
                        currRowForCol7++;
                    }
                    else if(temporary == 9 && currRowForCol9<=5){
                        currRowForCol9++;
                    }
                    else if(temporary == 11 && currRowForCol11<=5){
                        currRowForCol11++;
                    }
                    else if(temporary == 13 && currRowForCol13<=5){
                        currRowForCol13++;
                    }
                    printMatrix(gameBoard);
                    turn =0;
                }
                    else{
                        printf("Board is empty - can't undo!\n");
                        printMatrix(gameBoard);
                        turn = 1;
                    }
                   
                    break;
                }
            }
            else{
                printf("Invalid input, the number must be between 1 to 7\n");
                printMatrix(gameBoard);
            }
        }
        }
    }
    void startGame(){
         int i,j;
         printf("Welcome!!!\n");
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 15; j++) {
                if(j % 2 == 0){
                gameBoard[i][j] = '|';
                }
                else{
                gameBoard[i][j] = ' ';
                }
            }
        }
        printMatrix(gameBoard);
    }
    int gameBoardisFull(){
        if(currRowForCol1>=0 || currRowForCol3>=0 || 
           currRowForCol5>=0 || currRowForCol7>=0 || 
           currRowForCol9>=0 || currRowForCol11>=0 ||
           currRowForCol13>=0){
               return 0;
           }
           else{
            printf("It's a tie!");
               return 1;
           }
    }
    
    int is4inARow(char gameBoard[6][15],char sym){
        //HORIZONTAL
        int i,j,k;
        for(i=0;i<6;i++){
            for(j=1;j<9;j+=2){
                if(gameBoard[i][j] == sym && gameBoard[i][j]==gameBoard[i][j+2] &&
                   gameBoard[i][j]==gameBoard[i][j+4] && gameBoard[i][j]==gameBoard[i][j+6]){
                    return 1;
                }
            }
        }
        //VERTICAL
        for(i=0;i<3;i++){
            for(j=1;j<15;j+=2){
                if(gameBoard[i][j] == sym && gameBoard[i][j]==gameBoard[i+1][j] &&
                   gameBoard[i][j]==gameBoard[i+2][j] && gameBoard[i][j]==gameBoard[i+3][j]){
                    return 1;
                }
            }
        }
        //DIAGONAL RIGHT
        for(i=0;i<3;i++){
            for(j=1;j<9;j+=2){
                if(gameBoard[i][j] == sym && gameBoard[i][j]==gameBoard[i+1][j+2] &&
                   gameBoard[i][j]==gameBoard[i+2][j+4] && gameBoard[i][j]==gameBoard[i+3][j+6]){
                    return 1;
                }
            }
        }
        //DIAGONAL LEFT
        for(i=0;i<3;i++){
            for(j=1;j<15;j+=2){
                if(gameBoard[i][j] == sym && gameBoard[i][j]==gameBoard[i+1][j-2] &&
                  gameBoard[i][j]==gameBoard[i+2][j-4] && gameBoard[i][j]==gameBoard[i+3][j-6]){
                    return 1;
                }
            }
        }    
        return 0;
    }
    void FourInARowGame(){
        turn=0;
        numMoves=0;
        isWinner = 0;
        currRowForCol1 = 5;
        currRowForCol3 = 5;
        currRowForCol5 = 5;
        currRowForCol7 = 5;
        currRowForCol9 = 5;
        currRowForCol11 = 5;
        currRowForCol13 = 5;
        int help[6][15] ={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
        startGame();
        while(!gameBoardisFull() && isWinner==0){
            if(turn == 0){
                playerX(gameBoard);
                if(is4inARow(gameBoard,'x')==1){
                    printf("Player X wins!!!!");
                    isWinner=1;
                }
            }
            else if(turn == 1){
                playerO(gameBoard);
                if(is4inARow(gameBoard,'o')==1){
                    printf("Player O wins!!!!");
                    isWinner=1;
                }
            }
        }
    }
    
     int main(){
        
       FourInARowGame();
        return 0;
    }