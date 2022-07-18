#ifndef SWAP_H
# define SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include "libft/libft.h"

typedef struct s_stack Stack;
typedef struct s_stack
{
    int *store;
    int get;
    int size;
    int length;
    bool (*push)(Stack *, int);
    bool (*pop)(Stack *);
} Stack;

Stack *CreateStack(int size);
bool push(Stack *stack, int member);
bool pop(Stack *stack);
bool GetItem(Stack *stack);
int array_length(char **array);
#endif