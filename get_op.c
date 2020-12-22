#include "monty.h"

/**
 * find_op - looks for the operator
 * @head: pointer to stack
 * Return: 1 on success
 */

int find_op(stack_t **head)
{
	int i = 0;

	instruction_t f_ope[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"mul", op_mul},
		{"nop", op_nop},
		{"sub", op_sub},
		{"div", op_div},
		{"mod", op_mod},
		{"pchar", op_pchar},
		{NULL, NULL}
	};
	if (gvars.cmd[0] == '#')
		return (1);

	while (f_ope[i].opcode != NULL)
	{
		if (strcmp(gvars.cmd, f_ope[i].opcode) == 0)
		{
			f_ope[i].f(head, gvars.line_number);
			return (1);
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n",
		gvars.line_number, gvars.cmd);
	gvars.ret_val = -1;
	return (-1);
}
