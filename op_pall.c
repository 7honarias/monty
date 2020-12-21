#include "monty.h"

/**
 * op_pall - function that print all
 * @head: head of linked list
 * @line_number: line number of comand
 * Return: Nothing
 */

void op_pall(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;
	temp = *head;

	while (temp)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
	}

	(void)line_number;
}
