#include "monty.h"

/**
 * pchar - ....
 *
 * @stack: head of stack
 * @line_number: ...
 *
 * Return: nothing
 */

void pchar(stack_t **stack, unsigned int line_number)
{

	if (!*stack)
	{
		which_error(PCHAR_EMPTY_ERROR, NULL, line_number, NULL);
	}
	if (!isascii((*stack)->n))
	{
		which_error(PCHAR_RANGE_ERROR, NULL, line_number, NULL);
	}

	printf("%c\n", (*stack)->n);
}
