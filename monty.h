#ifndef MAIN_H
#define MAIN_H

#define  _POSIX_C_SOURCE 200809L
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * 
 * 
*/
typedef struct key_s
{
	char *arg;
        unsigned int line_number;
	FILE *file;
	char *content;
} key_t;

extern key_t all_key;

void _exit_fail(int value);
int run_op_code(char *opcode, stack_t **stack);
void free_stack(stack_t **stack);
void F_pall(stack_t **stack, unsigned int line_number);
void F_push(stack_t **stack, unsigned int line_number);
void F_pint(stack_t **stack, unsigned int line_number);
void F_pop(stack_t **stack, unsigned int line_number);
void F_swap(stack_t **stack, unsigned int line_number);
void F_add(stack_t **stack, unsigned int line_number);
void F_nop(stack_t **stack, unsigned int line_number);
int is_number(void);

#endif


