#include "monty.h"

void _exit_fail(int value)
{
	if (value == 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
		fclose(all_key.file);
	}
	else if (value == 2)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(all_key.file);
		free(all_key.content);
	}
	exit(EXIT_FAILURE);
}

