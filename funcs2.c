#include "monty.h"

/**
 * pint - print int in stack
 * @stack: double list
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack)
		printf("%d\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}
}

/**
 * pop - delete the node from list
 * @stack: list
 * Return: nothing
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *key = NULL;
	(void)line_number;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}

	key = (*stack)->next;
	free(stack);
	*stack = key;
	if (!*stack)
		return;
	(*stack)->prev = NULL;
}
