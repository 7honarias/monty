#include "monty.h"

/**
 * op_mul - multi top of list
 * @head: head of list
 * @line_number: line number
 * Return: Nothing
 */

void op_mul(stack_t **head, unsigned int line_number)
{

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short", line_number);
		st_var.ret_fun = -1;
		return;
	}
}
