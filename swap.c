#include "monty.h"

void F_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
    int i, p_tmp;

    i = 0;
    tmp = (*stack);
	while (tmp)
	{
        i++;
        tmp = tmp->next;
    }
    if (i < 2)
    {
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_stack(stack);
		free(all_key.content);
		fclose(all_key.file);
		exit(EXIT_FAILURE);
	}
    (*stack)->prev->n = p_tmp;
    (*stack)->prev->n = (*stack)->n;
    (*stack)->n = p_tmp;
}

