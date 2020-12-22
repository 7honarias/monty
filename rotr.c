#include "monty.h"

/**
 * op_rotr - rotates the stack to the bottom.
 * @stack: head of list
 * @line_number: line number
 * Return: Nothing
 */

void op_rotr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	int len = 0;
	stack_t *temp, *run;

	len = list_len(stack);
	if (len < 2)
		return;
	run = *stack;
	temp = *stack;
	while (run->next)
		run = run->next;
	run->prev->next = NULL;
	run->next = temp;
	temp->prev = run;
	run->prev = NULL;
	*stack = run;
}
