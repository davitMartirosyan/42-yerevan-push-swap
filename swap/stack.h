#ifndef STACK_H
# define STACK_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

// typedef struct
// {
//     int length;
//     int *stack;
//     int size;
// } Stack;

Stack *Create(int size);
void Remove(Stack *stack);
bool is_full(Stack *stack);
bool is_empty(Stack *stack);
bool push(Stack *stack, int n);
bool get(Stack *stack, int *item);
bool pop(Stack *stack, int *item);

#endif