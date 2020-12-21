#include "monty.h"
/**
 * free_list - free list in the end
 * @head: head of list
 * Return: Nothing
 */

void free_list(stack_t *head)
{
	stack_t *temp = NULL;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
