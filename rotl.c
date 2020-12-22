#include "monty.h"

/**
 * op_rotl - pass de first item to last
 * @stack: pointer head of list
 * @line_number: the line number
 * Return: Nothing
 */

void op_rotl(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *temp;
	stack_t *run = *stack;

	if (stack == NULL || *stack == NULL)
		return;

	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;

	while (run->next)
	{
		run = run->next;
	}
	temp->prev = run;
	temp->next = NULL;
	run->next = temp;
}
