#include "monty.h"
/**
 * rotr - Rotates the stack to the bottom.
 * @stack: Stack.
 * @line_number: Number of line.
 */
void rotr(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
stack_t  *tail, *new_tail;

tail = *stack;

if (tail == NULL || tail->next == NULL)
	return;

while (tail->next)
	tail = tail->next;
new_tail = tail->prev;
new_tail->next = NULL;
tail->prev = NULL;
tail->next = *stack;
*stack = tail;
}
