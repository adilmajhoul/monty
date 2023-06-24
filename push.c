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
	stack_t *current = NULL;
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		which_error(MALLOC_FAIL, NULL, 0, NULL);

	current = *stack;
	new_node->n = parameter;

	/* check if list is empty */
	if (current == NULL)
	{
		new_node->next = *stack;
		new_node->prev = NULL;
		*stack = new_node;
		return;
	}
	/* else if list is not empty */
	new_node->next = current;
	new_node->prev = (*stack)->prev;
	(*stack)->prev = new_node;
	*stack = new_node;
}
