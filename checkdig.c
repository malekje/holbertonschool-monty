#include "monty.h"

/**
 * is_digit - check if the data is in digits
 * @data: string 
 * Return: 0 or 1
 */
int is_digit(char *data)
{
	unsigned int i;

	if (data == NULL)
		return (0);
	for (i = 0; data[i] != '\0'; i++)
	{
		if (data[0] == '-' && i == 0)
			continue;
		if (isdigit(data[i]) == 0)
			return (0);
	}
	return (1);
}

