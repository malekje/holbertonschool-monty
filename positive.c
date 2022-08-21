#include "monty.h"
/**
 * positive - function to check if its + or false
 * @func_name: function name
 * Return: 0 or 1
 */
int positive(char *func_name)
{
	char data[][10] = {"push", "pall", "pint", "pop",
					   "swap", "add", "nop", ""};
	unsigned int i;

	for (i = 0; data[i][0] != '\0'; i++)
	{
		if (strcmp(data[i], func_name) == 0)
			return (1);
	}
	return (0);
}
