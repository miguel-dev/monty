#include "monty.h"

/**
 * pall - Prints all the values on the stack, starting from top.
 * @top: Address of the top element of the stack.
 * @line_number: numbers of lines
 */
void pall(stack_t **top, __attribute__((unused)) unsigned int line_number)
{
	stack_t *top_stack = NULL;

	if (top == NULL || *top == NULL)
		return;

	top_stack = *top;
	while (top_stack != NULL)
	{
		printf("%d\n", top_stack->n);
		top_stack = top_stack->next;
	}
}
