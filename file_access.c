#include "monty.h"

void file_access(char *file_name)
{
    if (access(file_name, F_OK) == -1)
        which_error(NO_FILE_ERROR, NULL, 0, NULL);
}