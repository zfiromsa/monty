#include "main.h"

stack_t *pall(stack_t *stack)
{
stack_t *tmp;

tmp = stack;
while (tmp != NULL)
{
    printf("%d\n", tmp->n);
    tmp = tmp->next;
}
return (stack);
}

