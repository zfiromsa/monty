#include "monty.h"

void F_add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int i, _tmp1, _tmp2;

	i = _tmp1 = _tmp2 = 0;
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
	_tmp1 = tmp->n;
	_tmp2 = tmp->prev->n;
	tmp = (*stack)->next;
	free(*stack);
	(*stack) = tmp;
	(*stack)->n = _tmp1 + _tmp2;
}

