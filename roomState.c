#include <stdio.h>

int roomState(array){
    if(array==0){
        return "empty";
    }
    else{
        return "taken";
    }
}
int main() {

    int room1[]={0,100}, room2[]={0,85}, room3[]={0,75}, room4[]={0,50} ;

    printf("Room 1 is %s and costs %d", roomState(room1[1]), room1[1]);
}
