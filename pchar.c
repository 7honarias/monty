#include "monty.h"

/**
 * op_pchar - print char of list
 * @stack: head of list
 * @line_number: line number
 * Return: Nothing
 */

void op_pchar(stack_t **stack, unsigned int line_number)
{
	int letter;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		gvars.ret_val = -1;
		return;
	}
	letter = (*stack)->n;

	if (letter < 0 || letter > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		gvars.ret_val = -1;
		return;
	}

	printf("%c\n", letter);

}
