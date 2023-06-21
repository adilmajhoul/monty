#include "monty.h"

void check_argv(const char *file_name, int argc)
{
    if (file_name == NULL || argc != 2)
    {
        fprintf(stderr, "USAGE: Monty file\n");
        exit(EXIT_FAILURE);
    }
}