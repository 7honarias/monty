#include "monty.h"

int get_op(stack_t **head)
{
	instruction_t functions[] = {
		{"push", op_push},
		{"pall", op_pall},
		{NULL, NULL}
	};
	int i;

	while (functions[i].opcode != NULL)
	{
		if (strcmp(st_var.command, functions[i].opcode) == 0)
		{
			functions[i].f(head, st_var.num_line);
			return (1);
		}
		i++;
	}
	return (-1);
}
