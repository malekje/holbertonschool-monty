#include "monty.h"

/**
 * push - add node
 * @argument: integer
 * Return: nothing
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newnd = NULL;
	char *num;

	(void)line_number;

	if (stack == NULL)
		return;
		
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		freeit(stack);
		exit(EXIT_FAILURE);
	}

	newnd = malloc(sizeof(stack_t));
	if (newnd == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		freeit(stack);
		exit(EXIT_FAILURE);
	}

	newnd->n = atoi(num);
	newnd->prev = NULL;
	newnd->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = newnd;
	*stack = newnd;
}


/**
 * pall - print all
 * @stack: list
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
    (void)line_number;

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
