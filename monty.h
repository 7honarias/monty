#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define UNUSED(x) (void)(x)
#define delim "\n\r\t "


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/* variables */
/**
 * struct variables - global variables to be used.
 * @lineptr: lineptr for getline.
 * @num_line: returns what line_number is getline reading.
 * @value: string vuale of second argument in file.
 * @value_int: convering value to int.
 * @comand: string value of first argument in file.
 * @ret_fun: return vuale for main file.
 * @flag: always successful.
 */

typedef struct variables
{
	int num_line;
	char *value;
	int value_int;
	char *command;
	int ret_fun;
} var_t;

extern var_t st_var;

var_t st_var;

void op_push(stack_t **stack, unsigned int line_number);
void op_pall(stack_t **stack, unsigned int line_number);
void op_pint(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void op_swap(stack_t **stack, unsigned int line_number);
void op_add(stack_t **stack, unsigned int line_number);
void op_nop(stack_t **stack, unsigned int line_number);
void op_sub(stack_t **stack, unsigned int line_number);
void op_div(stack_t **stack, unsigned int line_number);



void free_list(stack_t *head);
int check_int(char *str);
int get_op(stack_t **head);
int tokenizer(char *str);
int newline_check(char *str);
#endif
