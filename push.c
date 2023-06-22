#include "monty.h"
/**
 * push - add node at beginning of linked list (stack)
 *
 * @stack: head of the linked list
 * @parameter: nodes data (int)
 *
 * Return: nada
 */
void push(stack_t **stack, unsigned int parameter)
{
    stack_t *new = NULL;

    new = malloc(sizeof(stack_t));
    if (new == NULL)
        which_error(MALLOC_FAIL, NULL, 0, NULL);
    new->n = parameter;
    new->prev = NULL;
    new->next = *stack;

    if (*stack != NULL)
        (*stack)->prev = new;
    *stack = new;
}