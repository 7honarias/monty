#include "monty.h"

void op_pint(stack_t **head, unsigned int line_number)
{
    if (*head == NULL)
    {
            fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
            exit(EXIT_FAILURE);
    }
    stack_t *temp = *head;
    printf("%d\n", temp->n);
}