#include "monty.h"

var_t st_var;

int main(int argc, char *argv[])
{
	stack_t *head = NULL;
	FILE *p_file;
	int read;
	char *line = NULL;
	size_t len;
	int ret_token;

	st_var.num_line = 0;
	if (argc != 2)
	{
		printf("USAGE: monty file");
		return (-1);
	}
	p_file = fopen(argv[1], "r");
	if (p_file == NULL)
	{
		printf("Error: Can't open file <%s>", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, p_file)) != -1)
	{
		st_var.num_line++;
		ret_token = tokenizer(line);
		get_op(&head);
	}
	/*op_pall(&head, st_var.num_line);*/
	if (line)
	       	free(line);
	fclose(p_file);
	return (0);
}
