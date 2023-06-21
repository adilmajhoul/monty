#include "monty.h"

void which_error(int error_number, unsigned int line, char *opcode, char *buffer)
{
    if (error_number > 99)
        file_errors(error_number, line);

    if (error_number < 100)
        common_errors(error_number, line, opcode);
    else
        return;

    free_stack();
    if (buffer)
        free(buffer);
    exit(EXIT_FAILURE);
}

void file_errors(int error_number, unsigned int line)
{
    switch (error_number)
    {
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
}

void common_errors(int error_number, unsigned int line, char *opcode)
{
    switch (error_number)
    {
    case MALLOC_FAIL:
        fprintf(stderr, "Error: malloc failed\n");
        break;
    case UNKNOWN_INSTRUCTION:
        fprintf(stderr, "L%d: unknown instruction %s\n", line, opcode);
        break;
    default:
        break;
    }
}
