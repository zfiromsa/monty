#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
  char *arg = strtok(NULL, " \n\t\r");
  if (arg == NULL)
  {
    fprintf(stderr, "L%d: usage: push integer\n", line_number);
    exit(EXIT_FAILURE);
  }
  int value = atoi(arg);
  if (value == 0 && strcmp(arg, "0") != 0)
  {
    fprintf(stderr, "L%d: usage: push integer\n", line_number);
    exit(EXIT_FAILURE);
  }
  stack_t *node = malloc(sizeof(stack_t));
  if (node == NULL)
  {
    fprintf(stderr, "Error: malloc failed\n");
    exit(EXIT_FAILURE);
  }
  node->n = value;
  node->prev = NULL;
  node->next = *stack;
  if (*stack != NULL)
    (*stack)->prev = node;
  *stack = node;
}