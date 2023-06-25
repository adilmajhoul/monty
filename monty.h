#ifndef MONTY_
#define MONTY_
#define _GNU_SOURCE
/* COMMON errors */
#define MALLOC_FAIL 300
#define UNKNOWN_INSTRUCTION 301

/* file errors FROM: 100 T0 111*/
#define NO_FILE_ERROR 302
#define PUSH_ERROR 303
#define PINT_ERROR 304
#define POP_ERROR 305
#define SWAP_ERROR 306
#define ADD_ERROR 307

#define SUB_ERROR 308
#define DIV_ERROR 309
#define DIV_ZERO_ERROR 310
#define MUL_ERROR 311
#define MOD_ERROR 312

#define PCHAR_RANGE_ERROR 313
#define PCHAR_EMPTY_ERROR 314

#define ROTR_EMPTY_STACK_ERROR 315

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
int is_all_whitespace(char *str);

/* error handling */
void which_error(int error_number, char *opcode, unsigned int line,
				 char *buffer);
/* betty 40 lines :( */
void which_error2(int error_number, char *opcode, unsigned int line,
				  char *buffer);

void checker_1(const char *filename, int argc);
/*check if push parameter is digit */
int is_digit(char *str);
/* check file access rights */
void file_access(char *file_name);
/* check if file mentioned in argv*/
void check_argv(const char *fil_ename, int argc);

int valid_opcode(char *opcode, char **valid_opcodes);

/*task 1*/
void pint(stack_t **stack, __attribute__((unused)) unsigned int line_number);
/*task 2*/
void pop(stack_t **stack, __attribute__((unused)) unsigned int line_number);
/*task 3*/
void swap(stack_t **stack, unsigned int line_number);
/*task 4*/
void add(stack_t **stack, unsigned int line_number);
/*task 6*/
void sub(stack_t **stack, unsigned int line_number);
/*task 7*/
void _div(stack_t **stack, unsigned int line_number);
/*task 8*/
void mul(stack_t **stack, unsigned int line_number);
/*task 9*/
void mod(stack_t **stack, unsigned int line_number);

/*task 11*/
void pchar(stack_t **stack, unsigned int line_number);
/*task 12*/
void pstr(stack_t **stack, unsigned int line_number);
/*task 13*/
void rotl(stack_t **stack, unsigned int line_number);
stack_t *add_node_end(stack_t **stack, const int n);

/*task 14*/
void rotr(stack_t **stack, unsigned int line_number);
int delete_nodeint_at_index(stack_t **stack, unsigned int index);
/*task 15*/

void conditions(char *opcode, size_t line, char *parameter, char *buffer);
#endif
