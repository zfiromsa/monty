#include "monty.h"

key_t all_key;
int main(int arc, char **argv)
{
	size_t len;
	ssize_t read;
	stack_t *stack;

	stack = NULL;
	len = 0;
	if (arc != 2)
		_exit_fail(1);
	all_key.file = fopen(argv[1], "r");
	all_key.line_number = 0;
	if (all_key.file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(1);
	}
	while ((read = getline(&all_key.content, &len, all_key.file)) != -1)
	{
		char *opcode;

		all_key.line_number++;
		opcode = strtok(all_key.content, " \t\r\n\a");
		all_key.arg = strtok(NULL, " \n\t");
		if (!opcode || *opcode == '#')
			continue;
		run_op_code(opcode, &stack);
	}
	fclose(all_key.file);
	free(all_key.content);
	free_stack(&stack);
	return (0);
}

