#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @top: Addess of the top element of the stack.
 */
void push(stack_t **top, unsigned int line_number)
{
	stack_t *element;
	char *tokenarg1;
	int number = 0;

	element = malloc(sizeof(stack_t));
	if (element == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	tokenarg1 = strtok(NULL, " \n\t");
	if (isdigit(tokenarg1) == 1 && tokenarg1 != NULL)
		number = atoi(tokenarg1);
	else
	{
		fprintf(stderr, "L<%d>: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	element->n = number;
	element->prev = NULL;
	element->next = *top;
	*top = element;
}
