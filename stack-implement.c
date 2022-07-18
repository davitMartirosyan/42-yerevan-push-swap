#include "swap.h"

Stack *CreateStack(int size)
{
    if(size <= 0) return NULL;
    Stack *stack;

    stack = malloc(sizeof(Stack));
    if(stack == NULL) return NULL;
    stack->store = malloc(sizeof(int) * size);
    if(stack->store == NULL)
    {
        free(stack);
        return NULL;
    }
    stack->size = size;
    stack->length = 0;
    return stack;
}

bool push(Stack *stack, int member)
{
    if(!member || stack->length == stack->size)
        return false;
    stack->store[stack->length] = member;
    stack->get = stack->store[stack->length];
    stack->length++;
    return true;
}

bool pop(Stack *stack)
{
    if(stack->length == 0) return false;
    stack->length--;
    stack->get = stack->store[stack->length];
    return true;
}
bool GetItem(Stack *stack)
{
    if(stack->length == 0) return false;
    stack->get = stack->store[stack->length - 1];
    return true;
}

int array_length(char **array)
{
    int i;

    if(!array)
        return 0;
    i = 0;
    while(array[i])
        i++;
    return (i);
}