#include "monty.h"
/**
 * stack - Change for stack mode.
 * @stack: Stack.
 * @line_number: Number of line.
 */
void stack(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *top, *tail;
	int n = 0, index = 0;

	top = *stack;
	tail = *stack;

	if (top == NULL || top->next == NULL)
		return;


	while (tail->next)
	{
		tail = tail->next;
		index++;
	}
	while (index / 2)
	{
		n = top->n;
		top->n = tail->n;
		tail->n = n;
		index--;
		top = top->next;
		tail = tail->prev;
	}
}
