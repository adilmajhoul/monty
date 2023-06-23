#include "monty.h"
/**
 * select_operation - Select the appropriate operation function based on opcode
 * @opcode_string: The opcode to be matched
 *
 * Return: A function pointer to the selected operation function, or
 * NULL if not found
 */

void (*select_operation(char *opcode_string))(stack_t **, unsigned int)
{
	instruction_t select_operation[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{NULL, NULL}};

	int i = 0;

	while (select_operation[i].opcode != NULL)
	{
		if (strcmp(opcode_string, select_operation[i].opcode) == 0)
			return (select_operation[i].f);

		i++;
	}

	return (NULL);
}
