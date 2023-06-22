#include "monty.h"

/**
 * pint - .....
 *
 * @stack: head of stack
 * @line_number: ...
 *
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{

	if (*stack == NULL)
	{
		which_error(PINT_ERROR, NULL, line_number, NULL);
	}

	printf("%d\n", (*stack)->n);
}
