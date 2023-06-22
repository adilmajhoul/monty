#include "monty.h"
/**
 * check_argv - Check the validity of arguments
 * @file_name: The name of the file
 * @argc: The number of arguments
 *
 *
 */
void check_argv(const char *file_name, int argc)
{
	if (file_name == NULL || argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
