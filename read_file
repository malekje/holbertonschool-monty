#include"monty.h"
/**
 * read_file - Read file
 * @argv: value
 * Return: nothing
 */
void read_file(char *argv)
{
	int count = 0, result = 0;
	size_t bufsize = 0;
	char *values = NULL, *item = NULL;
	stack_t *stack = NULL;

	global.fd = fopen(argv, "r");
	if (global.fd)
	{
		while (getline(&global.line, &bufsize, global.fd) != -1)
		{
			count++;
			values = strtok(global.line, " \n\t\r");
			if (values == NULL)
			{
				free(values);
				continue;
			}
			else if (*values == '#')
				continue;
			item = strtok(NULL, " \n\t\r");
			result = get_opc(&stack, values, item, count);
			if (result == 1)
				push_error(global.fd, global.line, stack, count);
			else if (result == 2)
				ins_error(global.fd, global.line, stack, values, count);
		}
		free(global.line);
		free_dlistint(stack);
		fclose(global.fd);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv);
		exit(EXIT_FAILURE);
	}
}
