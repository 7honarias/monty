#include "monty.h"

/**
 * main - function main of proyect
 * @argc: number of argv
 * @argv: arguments
 * Return: always 0 but if fail EXITFAILURE
 */

int main(int argc, char *argv[])
{
	stack_t *head = NULL;
	FILE *p_file;
	int read;
	char *line = NULL;
	size_t len;
	int ret_token;

	st_var.ret_fun = 1;
	st_var.num_line = 0;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	p_file = fopen(argv[1], "r");
	if (p_file == NULL)
	{
		fprintf(stderr, "Error: Can't open file <%s>", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, p_file)) != -1)
	{
		st_var.num_line++;
		ret_token = tokenizer(line);
		if (ret_token != -1)
		{
			get_op(&head);
			if (st_var.ret_fun == -1)
			{
				free_list(head);
				free(line);
				fclose(p_file);
				exit(EXIT_FAILURE);
			}
		}
	}
	free(line);
	free_list(head);
	fclose(p_file);
	return (0);
}
