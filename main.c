/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//**** GLOBAL VARIABLE DECLERATION ****
int roomInt[5][9]={ {0,0,0,0,0,0,0,0,0} , {0,100,0,0,0,0,0,0,0}, {1,85,0,0,0,0,0,0,0}, {0,75,0,0,0,0,0,0,0},{0,50,4,3,1,3,1,2,0}}; 
char roomStr[5][4][100];
int loop =1, arrayCollums=0; 
int inputRm=0, r=0;

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
    #include <time.h>
    #include <stdlib.h>

    srand(time(NULL));   // Initialization, should only be called once.
    int r = rand()%999;      // Returns a pseudo-random integer between 0 and RAND_MAX.

    
    printf("Enter firstname : ");
    fflush(stdin);
    scanf("%s", roomStr[inputRm][0]);    // Read and store

    
    printf("Enter surname: ");
    fflush(stdin);
    scanf("%s",  roomStr[inputRm][1]);    // Read and store

    
    printf("Enter date of birth: ");
    fflush(stdin);
    scanf("%s",  roomStr[inputRm][2]);    // Read and store
    
//    sprintf(str, "%d", r);
  
 //   roomStr[inputRm][3]=str
    
    roomInt[inputRm][8] = (r+1000);
    printf("Booking ID: %s%d\n", roomStr[inputRm][1],roomInt[inputRm][8]);
    
    return 0;

    

}


int main()
{
    
    arrayCollums = sizeof(roomInt)/sizeof(roomInt[0]);
    
    
    while(loop==1){
        switch(getIntInput("\n1 - Check In\n2 - Book a Dinner Table\n3 - Check Out\n4 - Quit\nChoose an option:")){
            
            case 1:
                roomSelect();
                detailFill();
                
                //for(int i =0; i<5; i++){
                //    printf("%s ", roomStr[inputRm][i]);

                //}
                


        }
    }   
    
    return(0);
} 
    
        
        
    
        
    //printf("%d", roomInt[4][7]);
    

