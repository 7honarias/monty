#include "monty.h"

int tokenizer(char *str)
{
	st_var.command = strtok(str, "\t\n\r ");
	st_var.value = strtok(NULL, "\t\n\r ");

	if (st_var.value != NULL)
	{
		st_var.value_int = atoi(st_var.value);

	}
	return (1);
}
