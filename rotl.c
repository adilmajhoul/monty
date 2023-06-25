#include "monty.h"

/**
 * rotl - ....
 *
 * @stack: head of stack
 * @line_number: ...
 *
 * Return: nothing
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	int temp;

	if (!*stack)
		return;

	temp = current->n;

	while (current->next)
		current = current->next;

	add_node_end(&head, temp);
	pop(&head, line_number);
}
