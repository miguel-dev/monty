#include "monty.h"
/**
 * is_integer - Checks if a string is representing an integer.
 * @str: String to be checked.
 *
 * Return: 1 if it's an integer, 0 otherwise.
 */
int is_integer(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[0] == '+' || str[0] == '-')
		{
			i++;
			continue;
		}
		if (isdigit(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
