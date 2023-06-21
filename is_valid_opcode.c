#include "monty.h"

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
