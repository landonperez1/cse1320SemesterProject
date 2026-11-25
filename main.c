#include "Yu_Gi_Oh.h"


void printMenu(){ // temp menu to use while debuging will be changed when new functions and completion 
    printf("Temp Menu\n");
    printf("Exit: 0\n");
    printf("Create Players: 1\n");
    printf("Add cards to player: 2\n");
    printf("Battle Other Player: 3\n");
}

int main(void){

int userInput;

printMenu();

do { // breaks on inputs outide of an int
    scanf("%d", &userInput);
    printf("debug message: input was %d\n", userInput);

    if (userInput == 1){ // creates the players setting their life points to 8000 gives them their decks initilizes their hand and queues then ensures the game is ready for card selection and battle 

    }else if (userInput == 2){ // allows the player to add a specifc card to their deck by asking the player for the name and stats then validates its a real card before adding it to deck

    }else if (userInput == 3){ // battle determines who goes first by random number 1 or 2 then players draw and try to win by draining the other players life points
        
    }else if (userInput == 0){ // exits program 
        printf("exiting program");
        break;
    }else {
        clearInput(&userInput); // clears bad inputs
        printf("Invalid input please try again!\n");
    }

} while (userInput != 0); //kinda pointless to condition it to 0 since theres a user input already for 0 but whats the harm


return 0;
}