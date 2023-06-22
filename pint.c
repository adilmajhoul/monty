#include "monty.h"

void pint(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{

	if (*stack == NULL)
	{
		which_error(PINT_ERROR, NULL, line_number, NULL);
	}

	printf("%d\n", (*stack)->n);
}
