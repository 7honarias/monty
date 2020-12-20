#include "monty.h"

void op_pall(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;
	temp = *head;
	while(temp)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
	}
}
