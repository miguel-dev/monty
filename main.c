#include "monty.h"

/**
 * main - main function for monty interpreter
 * @argv: arguments for monty language
 * @argc: numbers of arguments for monty command
 * Return: the action of the command on monty language
 */
int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	_getline(argv[1]);
	return (0);
}
