#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){

    //create the alphabet for function to use
    char alphabet[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
    };

    //get a random number from 0-25 to sesrve as the random index in our list
    int random_index = (rand() % 26);

    //create and define var char "letter" to hold our new randomized letter
    char letter = alphabet[random_index];

    return letter;
}

