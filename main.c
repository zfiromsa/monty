#include "main.h"

int main(int arc, char **argv)
{
FILE *fptr;
size_t len;
int line_count;
ssize_t read;
char *content;
stack_t *stack;

content = NULL;
stack = NULL;
line_count = 0;
len = 0;
if (arc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
fptr = fopen(argv[1], "r");
if (fptr == NULL)
{
fprintf(stderr, "Error: Can't open file %s", argv[1]);
exit(EXIT_FAILURE);
}
while((read = getline(&content, &len, fptr)) != -1)
{
char *opcode, *arg;

line_count++;
opcode = strtok(content, " \n");
arg = strtok(NULL, " \n");
stack = run_op_code(opcode, arg, stack);
}
fclose(fptr);
free(content);
return (0);
}

