#include "monty.h"
/**
 * queue - change mode to queue.
 * @stack: Stack.
 * @line_number: Number of line.
 */
void queue(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *top;


	top = *stack;

	if (top == NULL || top->next == NULL)
		return;

}
