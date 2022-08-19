#include "monty.h"

/**
 * push - add node
 * @argument: integer
 * Return: nothing
 */

void push(struct stack_t **stack, unsigned int line_number)
{
	stack_t newnd = malloc(sizeof(stack_t));
	char *value;
	int cont;

	if (newnd == NULL)
	{
		free(newnd);
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	cont = checkvalue(value, line_number);
	newnd->n = cont;

	newnd->prev = NULL;
	if (!(*stack))
	{
		*stack = newnd;
		return;
	}
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
