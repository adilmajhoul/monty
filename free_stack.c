#include "monty.h"
/**
 * free_stack - free linked list
 * Return: nothing
 */

void free_stack(void)
{
	stack_t *head_copy;

	while (head)
	{
		head_copy = head;
		head = head->next;

		free(head_copy);
	}
}
