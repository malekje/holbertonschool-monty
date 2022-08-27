#include "monty.h"

/**
 * pop - function to delete the node in the list
 * @stack: list
 * Return: nothing
 */

void pop(stack_t **stack, unsigned int line_count)
{
	stack_t *tmp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_count);
		exit(EXIT_FAILURE);
		return;
	}


	tmp = (*stack)->next;
	freeit(stack);
	*stack = tmp;
	if (!*stack)
		return;
	(*stack)->prev = NULL;
}
