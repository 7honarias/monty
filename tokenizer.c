#include "monty.h"

/**
 * tokenizer - is a funciton for div the line
 * @str: string of line
 * Return: 1 if is success
 */

int tokenizer(char *str)
{
	st_var.command = strtok(str, "\t\n\r ");
	if (st_var.command == NULL)
		return (-1);
	st_var.value = strtok(NULL, "\t\n\r ");

	if (st_var.value != NULL)
	{
		st_var.value_int = atoi(st_var.value);

	}
	return (1);
}
