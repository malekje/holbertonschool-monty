#include "monty.h"

/**
 * is_digit - check if the data is in digits
 * @data: string 
 * Return: 0 or 1
 */
int is_digit(char *num)
{
	unsigned int i;

	if (num == NULL)
		return (0);
	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[0] == '-' && i == 0)
			continue;
		if (isdigit(num[i]) == 0)
			return (0);
	}
	return (1);
}

