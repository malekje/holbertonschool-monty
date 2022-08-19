#include "monty.h"

/**
 * pint - print int in stack
 * @stack: double list
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int linenumber)
{
	(void)linenumber;

	if (*stack)
		printf("%d\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", linenumber);
		free(stack);
		exit(EXIT_FAILURE);
	}
}

/**
 * pop - delete the node from list
 * @stack: list
 * Return: nothing
 */

void pop(stack_t **stack, unsigned int linenumber)
{
	stack_t *key = NULL;
	(void)linenumber;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", linenumber);
		exit(EXIT_FAILURE);
		return;
	}

	key = (*stack)->next;
	freeit(stack);
	*stack = key;
	if (!*stack)
		return;
	(*stack)->prev = NULL;
}
