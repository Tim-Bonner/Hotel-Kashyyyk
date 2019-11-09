#include <stdio.h>

int roomState(array){
    if(array==0){
        return "vacant";
    }
    else{
        return "taken";
    }
}
int main() {
    //                null   room1   room2   room3 room4
    int room[5][100]={{0,0}, {0,100},{0,85},{0,75},{0,50} } ;


    printf("Room 1 is %s and costs %d", roomState(room[1][0]), room[1][1]);
}
