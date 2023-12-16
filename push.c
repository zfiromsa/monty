#include "monty.h"

void F_push(stack_t **stack, unsigned int line_number)
{
	stack_t *N_node;
	int value;

	(void)line_number;

	value = atoi(all_key.arg);
	N_node = malloc(sizeof(stack_t));
	if (N_node == NULL)
		exit(2);
	N_node->prev = NULL;
	N_node->n = value;
	if (*stack != NULL)
	{
		N_node->next = *stack;
		(*stack)->prev = N_node;
	}
	*stack = N_node;
}

