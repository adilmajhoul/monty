#include "monty.h"

int is_digit(char *str)
{
    int i = 0;

    if (str == NULL)
        return (0);

    if (str[i] == '-')
        i++;

    for (; str[i] != '\0'; i++)
    {
        if (!isdigit((unsigned char)str[i]))
            return (0);
    }
    return (1);
}