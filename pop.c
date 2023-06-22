#include "monty.h"
/**
 * pop - .....
 *
 * @stack: head of stack
 * @line_number: ...
 *
 * Return: nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{

	stack_t *current = *stack;
	stack_t *temp = current;

	if (*stack == NULL)
		which_error(POP_ERROR, NULL, line_number, NULL);

	if (current->next != NULL)
	{
		(*stack) = (*stack)->next;
		(*stack)->prev = temp->prev;
	}
	else
	{
		*stack = NULL;
	}

	free(temp);
}
