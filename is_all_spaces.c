#include "monty.h"

int is_all_spaces(char *str)
{

    int i = 0;

    while (str[i])
    {
        if (strchr("\t\n\r\v\f ", str[i]) != NULL)
            return (0);

        i++;
    }

    return (1);
}