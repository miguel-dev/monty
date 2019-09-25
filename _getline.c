#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *file;
	char *linenumber = NULL;
	size_t len = 0, i = 0;
	ssize_t read;
	char *tokensline[10];

	file = fopen("archivo", "r");
	if (file == NULL)
		exit(EXIT_FAILURE);

	while ((read = getline(&linenumber, &len, file)) != -1)
	{
		printf("%s", linenumber);
		tokensline[i] = strtok(linenumber, " \n");
		printf("tokens 0: %s\n", *tokensline[1]);
	}
	free(linenumber);
	exit(EXIT_SUCCESS);
}
