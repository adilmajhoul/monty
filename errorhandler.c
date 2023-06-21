#include "monty.h"
/**
 * checker_1 - check if the file is accessable,
 * and the arguments is not up to one argu
 * @filename: the name of the file
 * @argc: the number of arguments
 * Return: void
*/
void checker_1 (const char *filename, int argc)
{
    if (filename == NULL || argc != 2)
    {
        fprintf(stderr, "USAGE: Monty file\n");
        exit(EXIT_FAILURE);
    }
    if (access(filename, R_OK) == -1)
    {
        fprintf(stderr, "USAGE: access to file <%s> failed\n", filename);
        exit(EXIT_FAILURE);
    }
}
/**
*
*
*
*/ 
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

