#include "monty.h"

/**
 * is_digit - check if the data is in digits
 * @data: string 
 * Return: 0 or 1
 */
int is_digit(char *arg)
{
	int i;

	for (i = 0; arg[i]; i++)
	{
		if (arg[i] == '-' && i == 0)
			continue;
		if (isdigit(arg[i]) == 0)
			return (1);
	}
	return (0);
}
