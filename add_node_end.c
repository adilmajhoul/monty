#include "monty.h"

/**
 * add_node_end - add node at the end of list
 *
 * @stack: head of stack
 * @n: ...
 *
 * Return: pointer to new node
 */
stack_t *add_node_end(stack_t **stack, const int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		which_error(MALLOC_FAIL, NULL, 0, NULL);

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*stack == NULL)
	{
		*stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
		stack_t *current = *stack;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
