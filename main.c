#include "monty.h"
/**
 * main - monty program
 * @argc: counter
 * @argv: value 
 * Return: exit success 
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
		read_file(argv[1]);
	else
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}

