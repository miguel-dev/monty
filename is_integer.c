#include "monty.h"

/**
 * is_integer - Checks if a string is representing an integer.
 * @integer: String to be checked.
 *
 * Return: 1 if it's an integer, 0 otherwise.
 */
int is_integer(char *str)
{
	while (str)
	{
		if (isdigit(*str))
			str++;
		else
			return (0);
	}
	return (1);
}
