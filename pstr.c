#include "monty.h"

/**
 * pstr - ....
 *
 * @stack: head of stack
 * @line_number: ...
 *
 * Return: nothing
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number;

	while (current && current->n != 0 && isascii(current->n))
	{
		printf("%c", current->n);

		current = current->next;
	}
	printf("\n");
}
