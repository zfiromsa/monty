#include "monty.h"

void F_pall(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;

tmp = *stack;
(void)line_number;
while (tmp)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}
}

