#include "Yu_Gi_Oh.h"


void clearInput(int *input){
    while ((*input = getchar()) != '\n' && *input != EOF) {
    }
}