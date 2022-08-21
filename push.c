#include "monty.h"
/**
 * push - function to add node at the end of the list
 * @stack: stack
 * @line_number: line number
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;

	(void)line_number;

	if (stack == NULL)
		return;
	if (!is_digit(value))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		freeit(stack);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		freeit(stack);
		exit(EXIT_FAILURE);
	}

	new->n = atoi(value);
	new->prev = NULL;
	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
