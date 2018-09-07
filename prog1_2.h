/**
 * Stack implementation.
 * CS 320
 * @author Brian Rafferty
 */
 
#include <stdio.h>

typedef struct stack{
  int* data;
  int size;
  int capacity;
} STACK;

STACK* MakeStack(int initialCapacity);
void Push(STACK *stackPtr, int data);
int Pop(STACK *stackPtr);
void Grow(STACK *stackPtr);
