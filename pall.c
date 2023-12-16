#include "monty.h"

void F_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_stack(stack);
		free(all_key.content);
		fclose(all_key.file);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	(void)line_number;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

