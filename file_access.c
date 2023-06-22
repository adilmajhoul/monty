#include "monty.h"

void file_access(char *file_name)
{
    if (access(file_name, R_OK) == -1)
    {
        fprintf(stderr, "Error: Can't open file %s\n", file_name);
        exit(EXIT_FAILURE);
    }
}