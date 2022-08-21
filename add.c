#include "monty.h"

/**
 * add -  adds the first two nodes of the stack
 * @stack: stack given by main
 * @line_count: line counter
 *
 * Return: void
 */
void add_(stack_t **stack, unsigned int line_count)
{
	int res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_count);
		exit(EXIT_FAILURE);
		return;
	}

	res = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_count);
	(*stack)->n = res;
}
