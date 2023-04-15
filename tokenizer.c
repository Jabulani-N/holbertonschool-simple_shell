#include "includeme.h"
/**
* Mystic_Square -- hopefully breaks lines into segments with strtok
* @environment: IDK
* Return: tokens -- hopefully
*/
int Mystic_Square(char **environment)
{
	int count;
	int charCount;
	char *input = NULL;
	size_t j = 0;

	while (j == 0)

	{
		printf("\"There's no distinction between science and magic.\" ☆ ");
		charCount = getline(&input, &j, stdin);
		if (charCount == -1)
		{
			free(input);
			printf("getline failed\n");
			return (-1);
		}
		if (strcmp(input, "exit\n") == 0)
		{
			free(input);
			return (0);
		}

		/* Tokenize the user input*/
		char *token;

		token = strtok(input, "\t\n\r ");
/* use whitespace characters as delimiter */
		while (token != NULL)
		{
			printf("Token: %s\n", token);
/** Do something with the token here */
			count++;
			token = strtok(NULL, "\t\n\r ");
		}
		return (count);
		
		free(input), j = 0;
	}

	/* This line should never run */
	printf("This line should never run\n");
	return (-1);
}
