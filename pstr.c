#include "monty.h"

/**
 * 
 * 
 * 
 */

void op_pstr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *temp = NULL;
	int letter;

	temp = *stack;
	while (temp)
	{
		letter = temp->n;
		if (letter <= 0 || letter > 127)
			break;
		printf("%c", letter);
		temp = temp->next;
	}
	printf("\n");
}
