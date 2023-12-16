#include "monty.h"

void F_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int i, _tmp1, _tmp2;

	i = _tmp1 = _tmp2 = 0;
	tmp = (*stack);
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		free_stack(stack);
		free(all_key.content);
		fclose(all_key.file);
		exit(EXIT_FAILURE);
	}
	_tmp1 = (*stack)->n;
	_tmp2 = (*stack)->next->n;
	tmp = (*stack)->next;
	free(*stack);
	(*stack) = tmp;
	(*stack)->n = _tmp1 - _tmp2;
}

