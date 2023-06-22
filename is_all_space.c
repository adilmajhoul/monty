#include "monty.h"

/**
 * is_all_whitespace - Check if a string consists of only whitespace characters
 * @str: The string to be checked
 *
 * Return: 1 if the string consists of only whitespace characters, 0 otherwise
 */
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
