#include "monty.h"

/**
 * op_div - div the top of list
 * @head: head of list
 * @line_number: line number
 * Return: Nothing
 */

void op_div(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;
	int i;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		st_var.ret_fun = -1;
		return;
	}
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		st_var.ret_fun = -1;
		return;
	}
	temp = *head;
	i = temp->n;
	*head = (*head)->next;
	i /= (*head)->n;
	(*head)->prev = NULL;
	(*head)->n = i;
	free(temp);
}
