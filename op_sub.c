#include "monty.h"

/**
 * op_sub - sub the top of list
 * @head: head of list
 * @line_number: line number
 * Return: Nothing
 */

void op_sub(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;
	int i;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n",
			line_number);
		st_var.ret_fun = -1;
		return;
	}
	temp = *head;
	*head = temp->next;
	i = (*head)->n;
	i -= temp->n;
	(*head)->n = i;
	(*head)->prev = NULL;
	free(temp);
}
