#include "monty.h"
/**
 * main - monty program
 * @argc: counter
 * @argv: value
 * Return: exit success
 */

int main(int argc, char *argv[])
{
	FILE *file;
	size_t size;
	char *line;
	stack_t *stack = NULL;
	unsigned int line_num = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	line = NULL;
	size = 0;
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &size, file) != -1)
	{
		execute_func(line, line_num, &stack);
		line_num++;
	}
	freeit(&stack);
	free(line);
	fclose(file);
	return (0);
}
