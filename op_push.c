#include "monty.h"

/**
 * op_push - push new node
 * @head: head of list
 * @line_number: line number
 * Return: Nothing
 */

void op_push(stack_t **head, unsigned int line_number)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stdout, "Error: malloc failed");
		st_var.ret_fun = -1;
		return;
	}

	new->n = st_var.value_int;
	new->prev = NULL;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = *head;
	}
	if (new->next != NULL)
		new->next->prev = new;
	*head = new;

	(void)line_number;

}
