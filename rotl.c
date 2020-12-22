#include "monty.h"

/**
 * op_rotl - pass de first item to last
 * @stack: pointer head of list
 * @line_number: the line number
 * Return: Nothing
 */

void op_rotl(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *temp;
	stack_t *run;

	if (*stack)
	{
		temp = *stack;
		run = *stack;
		*stack = (*stack)->next;
		(*stack)->prev = NULL;

		while (run->next)
		{
			run = run->next;
		}
		run->next = temp;
		temp->prev = run;
		temp->next = NULL;
	}
}
