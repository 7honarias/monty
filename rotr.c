#include "monty.h"

/**
 * op_rotr - rotates the stack to the bottom.
 * @stack: head of list
 * @line_number: line number
 * Return: Nothing
 */

void op_rotr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *temp;

	if (*stack)
	{
		temp = *stack;
		while ((*stack)->next)
		{
			(*stack) = (*stack)->next;
		}
		(*stack)->next = temp->next;
		temp->prev = (*stack)->prev;
		temp->next->prev = *stack;
		temp->prev->next = temp;
		temp->next = NULL;
		(*stack)->prev = NULL;
	}
}