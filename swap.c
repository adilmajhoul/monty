#include "monty.h"

/**
 * swap - ....
 *
 * @stack: head of stack
 * @line_number: ...
 *
 * Return: nothing
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (!*stack || !(*stack)->next)
	{
		which_error(SWAP_ERROR, NULL, line_number, NULL);
	}

	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
