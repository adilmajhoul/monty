#include "monty.h"
/**
 * which_error - Handle different error cases
 * @error_number: The error code indicating the type of error
 * @opcode: The opcode associated with the error (if applicable)
 * @line: The line number where the error occurred
 * @buffer: The buffer containing the input line (if applicable)
 */
void which_error(int error_number, char *opcode, unsigned int line,
				 char *buffer)
{
	if (error_number > 307)
		which_error2(error_number, opcode, line, buffer);

	switch (error_number)
	{
		/* common errors*/
	case MALLOC_FAIL:
		fprintf(stderr, "Error: malloc failed\n");
		break;
	case UNKNOWN_INSTRUCTION:
		fprintf(stderr, "L%d: unknown instruction %s\n", line, opcode);
		break;
		/*logic errrors */
	case NO_FILE_ERROR:
		fprintf(stderr, "USAGE: monty file\n");
		break;
	case PUSH_ERROR:
		fprintf(stderr, "L%d: usage: push integer\n", line);
		break;
	case PINT_ERROR:
		fprintf(stderr, "L%d: can't pint, stack empty\n", line);
		break;
	case POP_ERROR:
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		break;
	case SWAP_ERROR:
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		break;
	case ADD_ERROR:
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
		break;

	default:
		break;
	}

	free_stack();
	if (buffer)
		free(buffer);
	exit(EXIT_FAILURE);
}
/**
 * which_error2 - Handle different error cases
 * @error_number: The error code indicating the type of error
 * @opcode: The opcode associated with the error (if applicable)
 * @line: The line number where the error occurred
 * @buffer: The buffer containing the input line (if applicable)
 */
void which_error2(int error_number, char *opcode, unsigned int line,
				  char *buffer)
{
	(void)opcode;
	/* advanced tasks */
	switch (error_number)
	{
	case SUB_ERROR:
		fprintf(stderr, "L%d: can't sub, stack too short\n", line);
		break;
	case DIV_ERROR:
		fprintf(stderr, "L%d: can't div, stack too short\n", line);
		break;
	case DIV_ZERO_ERROR:
		fprintf(stderr, "L%d: division by zero\n", line);
		break;
	case MUL_ERROR:
		fprintf(stderr, "L%d: can't mul, stack too short\n", line);
		break;
	case MOD_ERROR:
		fprintf(stderr, "L%d: can't mod, stack too short\n", line);
		break;
	case PCHAR_RANGE_ERROR:
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
		break;
	case PCHAR_EMPTY_ERROR:
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
		break;
	case ROTR_EMPTY_STACK_ERROR:
		fprintf(stderr, "L%d: can't rotr, stack too short\n", line);
		break;

	default:
		break;
	}

	if (buffer)
		free(buffer);
	free_stack();

	exit(EXIT_FAILURE);
}
