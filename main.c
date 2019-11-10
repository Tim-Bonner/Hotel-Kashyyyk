#include <stdio.h>
#include <stdlib.h>
// calculating board type

int cost(boardType)
{

    if (boardType == 0){
        printf("price of board is 5");
    }
    else if (boardType == 1) {
        printf("price of board is 15");
    }
    else if (boardType == 2) {
        printf("price of board is 20");
    }

}

int main (){

    int boardType, boardCost=0;
    printf("Please input board type.\n");
    scanf("%d",&boardType);
    
    cost(boardType);

}
