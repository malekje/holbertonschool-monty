#include "monty.h"

/**
 * is_digit - check if the data is in digits
 * @data: string 
 * Return: 0 or 1
 */
int is_digit(char *data)
{
	char *aux = c;

	if (c == NULL)
		return (0);
	if (*aux == '-')
		aux++;

	for (; *aux != '\0'; aux++)
	{
		if ((*aux < '0' || *aux > '9'))
		{
			return (0);
		}
	}
	return (1);
}
