#include "monty.h"
/**
 * freeit - free stack
 * @stack: stack
 */
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
