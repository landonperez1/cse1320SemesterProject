#ifndef Yu_Gi_Oh_h
#define Yu_Gi_Oh_h

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct monstercard //values for monstercards based on canvas guidlines 
{
    char name[50];
    int attkValue;
    int defenseValue;
    int monsterType;

}MonsterCard;

typedef struct player{ // values for players based on cavas exept last one didnt understand it too sick rn
    char name[50];
    int lifePoints;
    int deck[30];
    int hand[5];
    //data needed to manage the player's attack and defense queues

}Player;

#endif