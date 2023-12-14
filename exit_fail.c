#include "main.h"

void _exit_fail(int value)
{
    if (value == 1)
    {
        fprintf(stderr, "USAGE: monty file\n");
    }
    exit(EXIT_FAILURE);
}

