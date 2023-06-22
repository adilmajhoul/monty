#include "monty.h"

/**
 * valid_opcode - Check if an opcode is valid
 * @opcode: The opcode to be checked
 * @valid_opcodes: The array of valid opcodes
 *
 * Return: 1 if the opcode is valid, 0 otherwise
 */

int valid_opcode(char *opcode, char **valid_opcodes)
{
	int i = 0;

	while (valid_opcodes[i])
	{
		if (strcmp(opcode, valid_opcodes[i]) == 0)
			return (1);

		i++;
	}

	return (0);
}
