#ifndef MONTY_
#define MONTY_
#define _GNU_SOURCE
/* COMMON errors */
#define MALLOC_FAIL 90
#define UNKNOWN_INSTRUCTION 91

/* file errors FROM: 100 T0 111*/
#define NO_FILE_ERROR 100
#define PUSH_ERROR 101
#define PINT_ERROR 102
#define POP_ERROR 103
#define SWAP_ERROR 104
#define ADD_ERROR 105

/* headers */
#include <ctype.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/* stack declaration "global variable"*/
extern stack_t *head;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* my functions*/
void push(stack_t **stack, unsigned int parameter);
void pall(stack_t **stack, unsigned int line_number);
void (*select_operation(char *opcode_string))(stack_t **, unsigned int);
void free_stack(void);

/* checks if a line have only white space cahrachters */
int is_all_spaces(char *str);

/* error handling */
void which_error(int error_number, unsigned int line, char *opcode, char *buffer);
void file_errors(int error_number, unsigned int line);
void common_errors(int error_number, unsigned int line, char *opcode);
void checker_1(const char *filename, int argc);
/*check if push parameter is digit */
int is_digit(char *str);
/* check file access rights */
void file_access(char *file_name);
/* check if file mentioned in argv*/
void check_argv(const char *fil_ename, int argc);
#endif
