#include "monty.h"

/**
 * tokenizer - create tokens for command and value
 * @str: takes a string
 * Return: 1 on success
 */
int tokenizer(char *str)
{
	if (newline_check(str) == 1)
		return (-1);

	st_var.command = strtok(str, delim);
	if (st_var.command[0] == '#')
		return (-1);
	if (st_var.command[0] != '\0')
	{
		st_var.value = strtok(NULL, delim);
		if (st_var.value != NULL)
			st_var.value_int = atoi(st_var.value);
	}
	return (1);
}

/**
 * newline_check - checks if the first char is a newline after first spaces
 * @str: takes a string
 * Return: 1 if it's a new line else 0
 */
int newline_check(char *str)
{
	int i = 0;

	if (str[i] == '\n')
		return (1);

	while (str[i])
	{
		if (str[i] != ' '  || str[i + 1] != ' ')
			break;
		i++;
	}
	i++;
	if (str[i] == '\n')
		return (1);
	else
		return (0);
}
