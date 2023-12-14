#include "monty.h"

void F_push(stack_t **stack, unsigned int line_number)
{
stack_t *N_node;
int value;

N_node = malloc(sizeof(stack_t));
if (N_node == NULL)
{
    fprintf(stderr, "Error: malloc failed");
    exit(EXIT_FAILURE);
}
if (*all_key.arg == '0')
    value = 0;

else if ((value = atoi(all_key.arg)) == 0)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
free_stack(stack);
free(all_key.content);
fclose(all_key.file);
exit(EXIT_FAILURE);
}
N_node->prev = NULL;
N_node->n = value;
if (*stack != NULL)
{
    N_node->next = *stack;
    (*stack)->prev = N_node;
}
*stack = N_node;
}

