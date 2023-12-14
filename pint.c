#include "monty.h"

void F_pint(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;

tmp = *stack;
(void)line_number;
while (tmp->next)
{
tmp = tmp->next;
}
printf("%d\n", tmp->n);
}
