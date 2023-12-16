#include "monty.h"

void F_add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int i;

	i = 0;
	tmp = (*stack);
	while (tmp->next)
	{
		i++;
		tmp = tmp->next;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_stack(stack);
		free(all_key.content);
		fclose(all_key.file);
		exit(EXIT_FAILURE);
	}
	(*stack)->n = (*stack)->n + ((*stack)->next->n);
	(*stack)->next = (*stack)->next->next;
	(*stack)->next->next->prev = (*stack);
	free((*stack)->next);
}

