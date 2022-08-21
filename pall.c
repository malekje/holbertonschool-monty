#include "monty.h"
/**
 * pall - function to print all
 * @stack: list
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	(void)line_number;
	if (stack == NULL || *stack == NULL)
		return;
	ptr = *stack;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
