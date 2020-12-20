# include "monty.h"

void op_add(stack_t **head, unsigned int line_number)
{
    stack_t *temp = NULL;
    int add;
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        st_var.ret_fun = -1;
        return;
    }
    temp = *head;
    add = temp->n;
    *head = temp->next;
    add += (*head)->n;
    (*head)->n = add;
    (*head)->prev = NULL;
    free(temp);


}