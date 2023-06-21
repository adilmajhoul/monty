#include "monty.h"

void (*select_operation(char *opcode_string))(stack_t **, unsigned int)
{
    instruction_t select_operation[] = {
        {"push", push},
        {"pall", pall},
        {NULL, NULL}};

    int i = 0;

    while (select_operation[i].opcode != NULL)
    {
        if (strcmp(opcode_string, select_operation[i].opcode) == 0)
            return select_operation[i].f;

        i++;
    }

    return NULL;
}