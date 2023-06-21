#include "monty.h"

/**
 * pall - print all elements of stack starting from the top (head)
 *
 * @stack: head of stack
 *
 * Return: nothing
 */
void pall(stack_t **stack)
{
    stack_t *current = NULL;
    current = *stack;

    for (; current != NULL; current = current->next)
        printf("%d\n", current->next);
}