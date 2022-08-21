#include "monty.h"
/**
 * execute_func - function for execution
 * @line: line
 * @line_number: line'n number
 * @stack: stack
 */
void execute_func(char *line, unsigned int line_number, stack_t **stack)
{
	char *name;
	int checking;

	name = strtok(line, " \t\a\n");
	if (name != NULL)
	{
		value = strtok(NULL, " \t\a\n");
		checking = positive(name);
		if (checking != STACK)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, line);
			freeit(stack);
			free(line);
			exit(EXIT_FAILURE);
		}
		else
			get_op_func(name, line_number, stack);
	}
}
