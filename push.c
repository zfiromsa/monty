#include "main.h"

stack_t *push(stack_t *stack, int value)
{
stack_t *N_stack;

N_stack = NULL;
if (stack == NULL)
{
stack = malloc(sizeof(stack_t));
if (stack == NULL)
{
    printf(stderr, "Error: malloc failed");
    exit(EXIT_FAILURE);
}
stack->n = value;
stack->next = NULL;
stack->prev = NULL;
return (stack);
}
N_stack = malloc(sizeof(stack_t));
if (N_stack == NULL)
{
    printf(stderr, "Error: malloc failed");
    exit(EXIT_FAILURE);
}
N_stack->next = NULL;
N_stack->prev = stack;
N_stack->n = value;
stack->next = N_stack;
return (N_stack);
}

