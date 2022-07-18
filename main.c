#include "swap.h"


int main(int ac, char **av)
{
    if(ac != 2)
        return 1;
    Stack *a;
    Stack *b;
    char **stack_members;
    int len;
    int i;

    stack_members = ft_split(av[1], ' ');
    len = array_length(stack_members);
    a = CreateStack(len);
    b = CreateStack(len);
    a->push = &push;
    a->pop = &pop;
    b->push = &push;
    b->pop = &pop;
    i = 0;
    while(i < len)
    {
        a->push(a, ft_atoi(stack_members[i]));
        i++;
    }
    a->pop(a);
    b->push(b, a->get);
    printf("%d", b->get);
}
