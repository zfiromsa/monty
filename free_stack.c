#include "main.h"

void free_stack(stack_t **stack)
{
stack_t **tmp;

while(!(*stack)->next)
{
    tmp = &(*stack)->next;
    free(stack);
    stack = tmp;
}
free(stack);
}

