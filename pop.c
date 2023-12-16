#include "monty.h"

void F_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (!(*stack))
	{
		fprintf(stderr, "L%d: can't pop empty stack\n", line_number);
		free_stack(stack);
		free(all_key.content);
		fclose(all_key.file);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	free(*stack);
	(*stack) = tmp;
}

