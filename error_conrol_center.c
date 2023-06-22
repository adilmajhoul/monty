#include "monty.h"

void which_error(int error_number, char *opcode, unsigned int line, char *buffer)
{
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
