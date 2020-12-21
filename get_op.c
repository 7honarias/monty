#include "monty.h"

/**
 * get_op - define function to use
 * @head: pointer head list
 * Return: 1 if success else -1
 */

int get_op(stack_t **head)
{
	instruction_t functions[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"add", op_nop},
		{"sub", op_sub},
		{"div", op_div},
		{NULL, NULL}
	};
	int i = 0;

	while (functions[i].opcode != NULL)
	{
		if (strcmp(st_var.command, functions[i].opcode) == 0)
		{
			functions[i].f(head, st_var.num_line);
			return (1);
		}
		i++;
	}
	fprintf(stdout, "L%d: unknown instruction %s\n",
		 st_var.num_line, st_var.command);
	st_var.ret_fun = -1;
	return (-1);
}
