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
	printf("888");
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_stack(stack);
		free(all_key.content);
		fclose(all_key.file);
		exit(EXIT_FAILURE);
	}
	printf("888");
	tmp->n = _tmp1;
	tmp->prev->n = _tmp2;
	tmp = (*stack)->next;
	free(*stack);
	(*stack) = tmp;
	(*stack)->n = _tmp1 + _tmp2;
}

