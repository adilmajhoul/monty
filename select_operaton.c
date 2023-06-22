#include "monty.h"
void (*select_operation(char *opcode_string))(stack_t **, unsigned int)
{
    instruction_t instructions[] = {
        {"push", push},
        {"pall", pall},
        {NULL, NULL}};
    int i = 0;

    while (instructions[i].opcode != NULL)
    {
        if (strcmp(instructions[i].opcode, opcode_string) == 0)
            return (instructions[i].f);
        i++;
    }
    return (NULL);
}