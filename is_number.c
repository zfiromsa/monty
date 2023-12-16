#include "monty.h"

int is_number(void)
{
    char *ptr;

    strtol(all_key.arg, &ptr, 10);
    return (*ptr == '\0');
}