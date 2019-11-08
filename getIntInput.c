#include <stdio.h>

int getInput(print){
    int error=0,input=1;
    while (error != 1 || input>0) {
        printf(print);
        fflush(stdin);
        error = scanf("%d", &input);
    }
    return input;
}
int main() {

    //Example asks how many days 
    int days=0;
    days = getInput("How many days");
    printf("%d",days);
return 0;
}
