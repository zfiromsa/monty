#include "main.h"

stack_t *run_op_code(char *opcode, char *argument, stack_t *stack)
{
if (strcmp(opcode, "push") == 0)
{
    int value;

    value = atoi(argument);
    return (push(stack, value));
}
else if (strcmp(opcode, "pall") == 0)
{
    return(pall(stack));
}
else
{
    fprintf(stderr, "<line_number>: unknown instruction %s", opcode);
    exit(EXIT_FAILURE);
}
}

