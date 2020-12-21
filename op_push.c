#include "monty.h"

/**
 * op_push - push new node
 * @head: head of list
 * @line_number: line number
 * Return: Nothing
 */


void op_push(stack_t **head, unsigned int line_number)
{
	stack_t *new = NULL;
	int val_check;

	val_check = check_int(st_var.value);
	if (val_check != 1 || (st_var.value == NULL))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		st_var.ret_fun = -1;
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stdout, "Error: malloc failed\n");
		st_var.ret_fun = -1;
		return;
	}

	new->n = st_var.value_int;
	new->prev = NULL;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = *head;
	}
	if (new->next != NULL)
		new->next->prev = new;
	*head = new;

	(void)line_number;

}

/**
 * check_int - verific if is int
 * @str: string value
 * Return: 1 if success else -1
 */

int check_int(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (-1);
	}
	if (str[i] == '-')
		i++;

	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (-1);
		}
		i++;
	}
	return (1);
}
