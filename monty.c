#include "monty.h"

stack_t *head = NULL;

/**
 * main - main
 * @argc: ..
 * @argv: ....
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	size_t line_length = 0;
	ssize_t bytes_read = 0;
	size_t line = 1;
	FILE *file_descriptor;
	char *file_name = argv[1];
	char *buffer = NULL;
	char *opcode = NULL;
	char *parameter = NULL;

	file_descriptor = fopen(file_name, "r");
	check_argv(file_name, argc);
	file_access(file_name);

	while ((bytes_read = getline(&buffer, &line_length, file_descriptor)) != -1)
	{
		conditions(opcode, line, parameter, buffer);
		line++;
	}
	free(buffer);
	fclose(file_descriptor);
	free_stack();
	return (0);
}
