#include "monty.h"

int run_op_code(char *opcode, stack_t **stack)
{
int i;
instruction_t instruction[] = {
    {"push", F_push},
    {"pall", F_pall},
    {"pint", F_pint},
    {NULL, NULL}
};

i = 0;
while(instruction[i].opcode != NULL)
{
if (!strcmp(opcode, instruction[i].opcode))
{
    instruction[i].f(stack, all_key.line_number);
    return (0);
}
i++;
}
fprintf(stderr, "<line_number>: unknown instruction %s", opcode);
free_stack(stack);
free(all_key.content);
fclose(all_key.file);
exit(EXIT_FAILURE);
}

