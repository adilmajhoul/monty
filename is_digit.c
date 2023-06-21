#include "monty.h"

int is_digit(char *str)
{

    int i = 0;

    while (str[i])
    {
        if (!isdigit(str[i]))
            return (0);

        i++;
    }

    return (1);
}