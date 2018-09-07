/**
 * After the program is called, the first
 * command line arguement will dictate how many
 * inputs are selected. Incorrect usage will trigger
 * an error message. Next an empty stack is created,
 * which will be filled if the input is written as shown:
 * 'push value,' and will empty the stack and print out
 * the next value when the user types 'pop'
 * CS 320
 * @author Brian Rafferty
 */

#include <stdio.h>
#include <stdlib.h>
#include "prog1_2.h"
#include <string.h>

int main(int argc, char *argv[]){

    printf("Assignment #1-3, Brian Rafferty, bprafferty03@gmail.com\n");
    if (argc != 2){
      printf("\nThis program expects a single command line argument.\n");
      exit(0);
    }

    if (atoi(argv[1]) == 0){
      printf("\nThis program expects a single command line argument.\n");
      exit(0);
    }

    int n;
    char buff[256];
    char *splitString;
    char prompt[15];
    char value[15];
    STACK* stackOne = MakeStack(10);

    n = atoi(argv[1]);
    for (int i = 0; i < n; i++){
      printf("> ");
      fgets(buff, 256, stdin);
      splitString = strtok(buff, " \t\r\n");
      strcpy(prompt, splitString);

      if (strcmp(prompt, "push") == 0){
        splitString = strtok(NULL, " \t\r\n");
        strcpy(value, splitString);
        splitString = strtok(NULL, " \t\r\n");

        if (splitString == NULL){
          if (atoi(value) != 0) {
            Push(stackOne, atoi(value));
          }
          else {
            int wordToInt = 0;
            int length = strlen(value);
            for (int i = 0; i < length; i++){
              wordToInt = wordToInt * 10 + (value[i] - 'a');
            }
            Push(stackOne, wordToInt);
          }
        }
      }

      else if (strcmp(prompt, "pop") == 0){
          splitString = strtok(NULL, " \t\r\n");

          if (splitString == NULL){
            printf("%d\n", Pop(stackOne));
          }
      }

    }

}
