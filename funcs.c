#include "monty.h"

/**
 * push - add node
 * @argument: integer
 * Return: nothing
 */

void push(stack_t **stack, unsigned int linenumber)
{
	stack_t *new = NULL;

	(void)linenumber;

	if (stack == NULL)
		return;
	if (!is_digit(value))
	{
		fprintf(stderr, "L%d: usage: push integer\n", linenumber);
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


/**
 * pall - print all
 * @stack: list
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int linenumber)
{
    (void)linenumber;

	stack_t *save = *stack;

	if (!*stack)
	{
		return;
	}
	while (save != 0)
	{
		printf("%d\n", save->n);
		save = save->next;
	}
}

/**
 * freeit - free stack
 * @stack: stack
 **/
void freeit(stack_t **stack)
{
	stack_t *p, *data;

	p = *stack;
	while (p)
	{
		data = p;
		p = p->next;
		free(data);
	}
}
