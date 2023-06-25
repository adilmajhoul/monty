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
	unsigned int index = 0;
	stack_t *current = *stack;
	stack_t *prev_node;
	int temp;

	(void)line_number;

	if (!*stack || !(*stack)->next)
		return;

	while (current->next)
	{
		current = current->next;
		temp = current->n;
		index++;
	}
	/*delete last node*/
	prev_node = current->prev;
	prev_node->next = current->next;
	free(current);

	push(&head, temp);
}
