#include "main.h"

stack_t *pall(stack_t *stack)
{
stack_t *tmp;

tmp = NULL;
if (!stack)
{
    return (NULL);
}
tmp = malloc(sizeof(tmp));
tmp = stack;
while (tmp->next != NULL)
{
    tmp = tmp->next;
}
free(tmp);
return (stack);
}

