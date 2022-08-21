#include "monty.h"

/**
 * get_op_func - function to select any operation 
 * @func_name: function name"
 * @line_num: line's number
 * @stack: stack
 */
void get_op_func(char *func_name, unsigned int line_number, stack_t **stack)
{
	instruction_t code[] = {{"push", push}, {"pall", pall}, {"pop", pop},
	 {"pint", pint}, {"swap", swap}, {"add", add_}, {"nop", nop}, {NULL, NULL}};
	unsigned int i;

	for (i = 0; code[i].opcode != NULL; i++)
	{
		if (strcmp(code[i].opcode, func_name) == 0)
		{
			code[i].f(stack, line_number);
		}
	}
}
