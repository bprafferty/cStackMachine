/**
 * Program builds a stack. Contains functions
 * to build a new stack, push data, pop data,
 * and will double the capacity of the stack
 * when more space is needed.
 * CS 320
 * @author Brian Rafferty
 */

#include <stdio.h>
#include <stdlib.h>
#include "prog1_2.h"


STACK* MakeStack(int initialCapacity){
    STACK *newStack = (struct stack*)malloc(sizeof(struct stack)* 1);
    newStack->size = 0;
    newStack->capacity = initialCapacity;
    newStack->data = (int*)malloc(sizeof(int)*10);
    return newStack;
}

void Push(STACK *stackPtr, int data){
    if (stackPtr->size == stackPtr->capacity){
      Grow(stackPtr);
    }
    stackPtr->data[stackPtr->size] = data;
    stackPtr->size++;
}

int Pop(STACK *stackPtr){
    if (stackPtr->size == 0){
      return -1;
    }
    stackPtr->size--;
    return stackPtr->data[stackPtr->size];
}

void Grow(STACK *stackPtr){
    int count;
    stackPtr->capacity *= 2;
    int *stackClone = (int*)malloc(sizeof(int)*stackPtr->capacity);
    for (count = 0; count < stackPtr->size; ++count){
      stackClone[count] = stackPtr->data[count];
    }
    stackPtr->data = stackClone;
}
