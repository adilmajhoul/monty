#include "monty.h"

/**
 * file_access - Check file accessibility
 * @file_name: The name of the file to be checked
 *
 */

void file_access(char *file_name)
{
	if (access(file_name, R_OK) == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}
}
