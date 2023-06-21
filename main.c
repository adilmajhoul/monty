#include "monty.h"

stack_t *head = NULL;

int main(__attribute__((unused)) int argc, char *argv[])
{

    void (*func)(stack_t **stack, unsigned int line_number);

    size_t line_length = 0;
    ssize_t bytes_read = 0;

    size_t line = 1;

    FILE *file_descriptor;
    char *file_name = argv[1];
    char *buffer = NULL;
    char *opcode;
    char *parameter;

    file_descriptor = fopen(file_name, "r");

    check_argv(file_name, argc);
    file_access(file_name);

        while ((bytes_read = getline(&buffer, &line_length, file_descriptor)) != -1)
    {
        opcode = strtok(buffer, "\t\n\r\v\f ");
        parameter = strtok(NULL, "\t\n\r\v\f ");
        if (strcmp(opcode, "push") == 0 && !is_digit(parameter))
        {
            which_error(PUSH_ERROR, line, NULL, buffer);
            exit(EXIT_FAILURE);
        }

        if (opcode != NULL)
        {
            func = select_operation(opcode);

            if (strcmp(opcode, "push") == 0)
            {
                func(&head, atoi(parameter));
            }
            else
                func(&head, line);
        }

        line++;
    }

    free(buffer);
    fclose(file_descriptor);
    free_stack();

    return 0;
}
