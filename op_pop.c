#include "monty.h"

void op_pop(stack_t **head, unsigned int line_number)
{
    stack_t *temp = NULL;

    if (*head == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        st_var.ret_fun = -1;
        return;
    }
    temp = *head;
    *head = temp->next;
    (*head)->prev = NULL;
    free(temp);
}