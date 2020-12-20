#include "monty.h"

void op_swap(stack_t **head, unsigned int line_number)
{
    stack_t *temp = *head;
    int i;

    if (temp->next == NULL || *head == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        st_var.ret_fun = -1;
        return;
    }
    i = (*head)->n;
    temp = temp->next;
    (*head)->n = temp->n;
    temp->n = i;
    
}