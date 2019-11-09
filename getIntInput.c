#include <stdio.h>

int getInput(print){
    int error=0,input=1;
    while (error != 1 || input<0) {
        printf("%s", print);
        fflush(stdin);
        error = scanf("%d", &input);
        if(error!=1){
            printf("Input is not an integer! please try again.\n");
        }
        else if(input<0){
            printf("Number is negative! Please try again.\n");
        }
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
