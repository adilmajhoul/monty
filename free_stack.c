#include "monty.h"
/**
 * free_dlistint - free linked list
 * @head: head
 * Return: nothing
 */

void free_stack(void)
{
    stack_t *current = head;
    stack_t *tmp;

    while (current != NULL)
    {
        tmp = current;
        current = current->next;
        free(tmp);
    }
}