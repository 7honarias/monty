#include "monty.h"

/**
 * op_rotl - pass de first item to last
 * @stack: pointer head of list
 * @line_number: the line number
 * Return: Nothing
 */

void op_rotl(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *temp, *run;

	if (*stack)
	{
		run = *stack;
	while (run->next)
		run = run->next;

	temp = *stack;
	*stack = temp->next;
	(*stack)->prev = NULL;
	temp->next = NULL;
	temp->prev = run;
	run->next = temp;
	}
}
