#include "Yu_Gi_Oh.h"


void printMenu(){ // temp menu to use while debuging will be changed when new functions and completion 
    printf("Temp Menu\n");
    printf("Exit: 0\n");
}

int main(void){

int userInput;

printMenu();

do { // breaks on inputs outide of an int
    scanf("%d", &userInput);
    printf("debug message: input was %d\n", userInput);

} while (userInput != 0);


return 0;
}