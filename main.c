/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//**** GLOBAL VARIABLE DECLERATION ****
int roomInt[5][8]={ {0,0,0,0,0,0,0,0} , {0,100,0,0,0,0,0,0}, {1,85,0,0,0,0,0,0}, {0,75,0,0,0,0,0,0},{0,50,4,3,1,3,1,2}}; 
char* roomStr[5][3];
int loop =1, arrayCollums=0; 
int inputRm=0;

//*************************************

int roomState(array){
    if(array==0){
        return "vacant";
    }
    else{
        return "taken";
    }
}

int getIntInput(print){
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

int roomSelect(){
    int error=0;
    inputRm=0;
    while (error != 1 || inputRm<0 || inputRm>4 || roomInt[inputRm][0]==1) { //forces user to choose a real vacant room
        printf("\n");
        for(int i =1; i<5; i++){
            printf("%d - Room%d costs £%d and is %s\n", i,i, roomInt[i][1], roomState(roomInt[i][0]));
        }
        printf("Please select room number: ");
        fflush(stdin);
        error = scanf("%d", &inputRm);
        //printf("%d", error);
        if(error!=1){
            printf("\nInput must be a room number. Please try again.\n");
        }
        else if(inputRm<0 || inputRm>4){
            printf("\nRoom number must be between 1 and 4. Please try again.\n");
        }
        else if(roomInt[inputRm][0]==1){
            printf("Room is not vacant. Please select a vacant room.");
        }
    }
}

int detailFill(){
    char buffer[256];
    printf("What is your firstname: ");
    fflush(stdin);
    scanf("%s", &buffer);
    roomStr[1][0] =buffer;
    
    printf("What is your surname: ");
    fflush(stdin);
    scanf("%s", &buffer);
    roomStr[1][1] =buffer;
    
    printf("What is your date of birth: ");
    fflush(stdin);
    scanf("%s", &buffer);
    roomStr[1][2] =buffer;
    

}


int main()
{
    arrayCollums = sizeof(roomInt)/sizeof(roomInt[0]);
    
    
    while(loop==1){
        switch(getIntInput("1 - Check In\n2 - Book a Dinner Table\n3 - Check Out\n4 - Quit\nChoose an option:")){
            
            case 1:
                roomSelect();
                detailFill();
                


        }
    }   
    
    return(0);
} 
    
        
        
    
        
    //printf("%d", roomInt[4][7]);
    


    
        
        
    
        
    //printf("%d", roomInt[4][7]);
    

