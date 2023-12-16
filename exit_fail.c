#include "monty.h"

void _exit_fail(int value)
{
	fclose(all_key.file);
	if (value == 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
	}
	else if (value == 2)
	{
		fprintf(stderr, "Error: malloc failed\n");
	}
	free(all_key.content);
	exit(EXIT_FAILURE);
}

