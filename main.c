#include <stdio.h>
#include <stdlib.h>
// calculating board type
int cost(print)
{
    int  boardType;
    if (boardType == 0){
        printf("price of board is 5");
    }
    else if (boardType == 1) {
        printf("price of board is 15");
    }
    else if (boardType == 2) {
        printf("price of board is 20");
    }
    return boardType;
}

main (){

    int boardType, boardCost=0;
    printf("Please input board type.\n");
    scanf("%d",&boardType);
    boardCost = cost(boardType);
    printf("\n%d",boardCost);
}
