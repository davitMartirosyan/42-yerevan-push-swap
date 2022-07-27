#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int n;
    struct Node *next;
} Node;

int main(void)
{
    Node root, elem;
    root.n = 15;
    root.next = &elem;
    elem.n = -2;
    elem.next = NULL;

    printf("%d ", root.n);
    printf("%d ", root.next->n);
    return (0);
}