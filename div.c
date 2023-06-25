#include "monty.h"

/**
 * _div - ....
 *
 * @stack: head of stack
 * @line_number: ...
 *
 * Return: nothing
 */

void _div(stack_t **stack, unsigned int line_number)
{

	if (!*stack || !(*stack)->next)
	{
		which_error(DIV_ERROR, NULL, line_number, NULL);
	}
	if ((*stack)->n == 0)
	{
		which_error(DIV_ZERO_ERROR, NULL, line_number, NULL);
	}

	(*stack)->next->n /= (*stack)->n;

	pop(&head, line_number);
}
