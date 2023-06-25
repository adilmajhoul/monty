#include "monty.h"

/**
 * delete_nodeint_at_index - ....
 *
 * @stack: head of stack
 * @index: ...
 *
 * Return: nothing
 */

int delete_nodeint_at_index(stack_t **stack, unsigned int index)
{
	unsigned int i = 0;
	stack_t *current_node;
	stack_t *previous_node;

	if (!*stack)
		return (-1);

	current_node = *stack;

	if (index == 0)
	{
		*stack = (*stack)->next;
		free(current_node);
		return (1);
	}

	while (i < index && current_node)
	{
		previous_node = current_node;
		current_node = current_node->next;
		i++;

		if (!current_node)
			return (-1);
	}

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
