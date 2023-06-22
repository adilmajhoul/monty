#include "monty.h"

int is_all_whitespace(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (!isspace(str[i]))
            return (0);

        i++;
    }
    return (1);
}
