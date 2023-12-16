#include "monty.h"

void _exit_fail(int value)
{
	fclose(all_key.file);
	if (value == 1)
	{
    	fprintf(stderr, "L%d: usage: push integer\n", all_key.line_number);
        free(all_key.content);
        fclose(all_key.file);
	}
	else if (value == 2)
	{
		fprintf(stderr, "Error: malloc failed\n");
	}
	else if (value == 3)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	free(all_key.content);
	exit(EXIT_FAILURE);
}

