#include "main.h"

stack_t *push(stack_t *stack, int value)
{
stack_t *N_stack;


N_stack = malloc(sizeof(stack_t));
if (N_stack == NULL)
{
    fprintf(stderr, "Error: malloc failed");
    exit(EXIT_FAILURE);
}
N_stack->next = stack;
N_stack->prev = NULL;
N_stack->n = value;
if (!stack)
{
stack->prev = N_stack;
}
return (N_stack);
}

