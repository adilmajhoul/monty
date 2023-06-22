#include "monty.h"

/**
 * is_digit - Check if a string represents a valid digit
 * @str: The string to be checked
 *
 * Return: 1 if the string represents a valid digit, 0 otherwise
 */

int is_digit(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	if (str[i] == '-')
		i++;

	for (; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
