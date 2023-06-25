#include "monty.h"

/**
 * mul - ....
 *
 * @stack: head of stack
 * @line_number: ...
 *
 * Return: nothing
 */

void mul(stack_t **stack, unsigned int line_number)
{

	if (!*stack || !(*stack)->next)
	{
		which_error(MUL_ERROR, NULL, line_number, NULL);
	}

	(*stack)->next->n *= (*stack)->n;

	pop(&head, line_number);
}
