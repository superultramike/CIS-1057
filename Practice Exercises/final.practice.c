#include <stdio.h>

int main(){
        int crowded = 1;    int noisy = 0;    int booze = 1;    int food = 0;
        if((crowded && !noisy) || (!food || booze))        printf("Let's go to this club!\n");    else        printf("What do you want to do?\n");    if((!crowded && !noisy) && (food && booze))        printf("Let's go to the bar.\n");    else        printf("Let's stay home.\n");}
