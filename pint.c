#include "monty.h"

void F_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_stack(stack);
		free(all_key.content);
		fclose(all_key.file);
		_exit_fail(1);
	}
	printf("%d\n", (*stack)->n);
}

