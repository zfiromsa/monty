#include "monty.h"

void F_pint(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;

(void)line_number;
printf("%d\n",(*stack)->n);
}

