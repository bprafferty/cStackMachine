/**
 * Prints header with assignment, name, and email.
 * Then asks what is the user's name. Lastly it prints
 * the name it received as input. 
 * CS 320
 * @author Brian Rafferty
 */

#include <stdio.h>

int main(int argc, char *argv[]){

    char buff[256];
    printf("Assignment #1-1, Brian Rafferty, bprafferty03@gmail.com\n");
    printf("What is your name?\n");
    scanf("%256[^\n]", buff);
    printf("Hello %s!\n", buff);

}
