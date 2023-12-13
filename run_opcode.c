#include "main.h"

stack_t *run_op_code(instruction_t *opcode, stack_t *argument, stack_t *stack)
{
stack_t *strct;

strct = NULL;
if (strcmp(opcode, "push") == 0)
{
    int value;

    value = atoi(argument);
    strct = push(stack, value);
}
else if (strcmp(opcode, "pall") == 0)
{
    strct = pall(stack);
}
else
{
    printf(stderr, "<line_number>: unknown instruction %s", opcode);
    exit(EXIT_FAILURE);
}
return (strct);
}

