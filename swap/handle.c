#include "stack.h"

Stack *Create(int size)
{
    if(size <= 0) return NULL;
    Stack *stack = malloc(sizeof(Stack));
    if(stack == NULL) return NULL;
    stack->stack = malloc(sizeof(int) * size);
    if(stack->stack == NULL)
    {
        free(stack);
        return NULL;
    }
    stack->size = size;
    stack->length = 0;
    return stack;
}

void Remove(Stack *stack)
{
    free(stack->stack);
    free(stack);
}

bool is_full(Stack *stack)
{
    return stack->size == stack->length;
}

bool is_empty(Stack *stack)
{
    return stack->length == 0;
}

bool push(Stack *stack, int n)
{
    if(is_full(stack))
        return false;
    stack->stack[stack->length] = n;
    stack->length++;
    return true;
}

bool get(Stack *stack, int *item)
{
    if(is_empty(stack)) return false;
    *item = stack->stack[stack->length - 1];
    return true;
}

bool pop(Stack *stack, int *item)
{
    if(is_empty(stack)) return NULL;
    stack->length--;
    *item = stack->stack[stack->length];
    return true;
}