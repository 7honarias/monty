#include "monty.h"
/**
 * op_sub - function to subtract top two elements of a stack
 * @stack: double pointer of stack_t type to head of stack
 * @line_number: unsigned int type
 * Return: stack with new sum and removed node
 *
 */
void op_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int len = 0;

	len = list_len(stack);
	if (len < 2 || stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n",
			line_number);
		gvars.ret_val = -1;
		return;
	}
	else
	{
		temp->next->n -= (*stack)->n;
		*stack = (*stack)->next;
		free(temp);
		(*stack)->prev = NULL;
	}
}
