#include "monty.h"

void F_add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int i;

	i = 0;
	tmp = (*stack);
	while (tmp)
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
	tmp->prev->n = tmp->n + (tmp->prev->n);
	tmp->prev->next = NULL;
	free(tmp);
}

