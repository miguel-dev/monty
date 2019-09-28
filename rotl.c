#include "monty.h"
/**
 * rotl - Rotates the stack to the top.
 * @stack: Stack.
 * @line_number: Number of line.
 */
void rotl(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *s, *i;

	s = *stack;

	if (s == NULL || s->next == NULL)
		return;

	i = s->next;

	*stack = s->next;
	s->next = NULL;
	(*stack)->prev = NULL;

	while (i->next)
	{
		i = i->next;
	}
	i->next = s;
	s->prev = i;
}
