#include "monty.h"

void F_push(stack_t **stack, unsigned int line_number)
{
	stack_t *N_node;
	int value;


	if (all_key.arg || !is_number())
	{
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        free_stack(stack);
        free(all_key.content);
        fclose(all_key.file);
        _exit_fail(1);
	}
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

