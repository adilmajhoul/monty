#include "monty.h"

int main(__attribute__((unused)) int argc, char *argv[])
{

    size_t line_length = 0;
    int bytes_read = 0;

    FILE *file_descriptor;

    char *file_name = argv[1];

    char *buffer = NULL;

    file_descriptor = fopen(file_name, "r");

    while ((bytes_read = getline(&buffer, &line_length, file_descriptor)) != -1)
    {
        printf("%s", buffer);
    }

    return (0);
}