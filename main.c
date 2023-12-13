#include "main.h"

int main(int arc, char **argv)
{
FILE *fptr;
int len, line_count;
char *content;
stack_t *stack, *head;

content = NULL;
stack = NULL;
head = NULL;
line_count = 0;
len = 0;
if (arc != 2)
{
printf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

fptr = fopen(argv[1], 'r');
if (fptr == NULL)
{
printf(stderr, "Error: Can't open file %s", argv[1]);
exit(EXIT_FAILURE);
}
while(getline(&content, &len, fptr) != -1)
{
char *opcode, *arg;

line_count++;
opcode = strtok(content, " \n");
if (line_count == 1)
    head = run_op_code(opcode, arg, stack);
stack = run_op_code(opcode, arg, stack);
}
fclose(fptr);
free(content);
}

