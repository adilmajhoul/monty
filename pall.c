#include "monty.h"

/**
 * pall - print all elements of stack starting from the top (head)
 *
 * @stack: head of stack
 * @line_number: ...
 *
 * Return: nothing
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;

	(void)line_number;

	current = *stack;

	if (current == NULL)
		return;

	if (current != NULL)
	{
		while (current)
		{
			printf("%d\n", current->n);

			current = current->next;
		}
	}
}
