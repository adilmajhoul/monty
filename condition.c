#include "monty.h"
/**
 * conditions - condition dashboard for mainc.c
 * @opcode: ---
 * @line: ---
 * @parameter: ---
 * @buffer: --
 * Return: void
 */
void conditions(char *opcode, size_t line, char *parameter, char *buffer)
{
	void (*func)(stack_t **stack, unsigned int line_number);
	char *valid_opcodes[] = {"push", "pall", "pint", "pop", "swap", "add",
							 "sub", "mul", "mod", "div", "pchar", "pstr", "rotl", "rotr", NULL};

	if (is_all_whitespace(buffer))
		return;

	opcode = strtok(buffer, "\t\n\r\v\f ");
	parameter = strtok(NULL, "\t\n\r\v\f ");

	if (strcmp(opcode, "nop") == 0)
		return;

	if (opcode[0] == '#')
		return;

	if (strcmp(opcode, "push") == 0 && !is_digit(parameter))
		which_error(PUSH_ERROR, NULL, line, buffer);

	if (!valid_opcode(opcode, valid_opcodes))
		which_error(UNKNOWN_INSTRUCTION, opcode, line, buffer);

	if (opcode != NULL)
	{
		func = select_operation(opcode);
		if (strcmp(opcode, "push") == 0)
		{
			func(&head, atoi(parameter));
		}
		else
		{
			func(&head, line);
		}
	}
}
