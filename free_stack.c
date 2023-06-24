#include "monty.h"
/**
 * free_stack - free linked list
 * Return: nothing
 */

void free_stack(void)
{
	stack_t *temp_node = NULL;

	if (head)
	{
		temp_node = head;

		while (temp_node)
		{
			head = head->next;
			free(temp_node);
			temp_node = head;
		}
	}
}
