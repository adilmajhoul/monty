#include "monty.h"

/**
 * rotr - ....
 *
 * @stack: head of stack
 * @line_number: ...
 *
 * Return: nothing
 */

void rotr(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;
    int temp;
    unsigned int index = 0;

    (void)line_number;

    if (!*stack)
        return;

    while (current->next)
    {
        current = current->next;
        temp = current->n;
        index++;
    }
    delete_nodeint_at_index(&head, index);
    push(&head, temp);
}
