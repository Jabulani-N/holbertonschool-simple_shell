#include "includeme.h"
/**
 * stray_cat - get token of string
 * @lineptr: comman user
 * Return: pointer to array of strings
 * that string array is an array of the input string
 */

char **stray_cat(char *lineptr)
{
	char **user_comm = NULL;
	char *token = NULL;
	size_t i = 0, size = 0;

	if (lineptr == NULL)
		return (NULL);
	for (i = 0; lineptr[i]; i++)
	{ /*iterates through the string (array of char)*/
		if (lineptr[i] == ' ')
			size++;/* adds index slot if space*/
	}
	if ((size + 1) == strlen(lineptr))
		return (NULL);
	user_comm = malloc(sizeof(char *) * (size + 2));
	/*allocate for array of strings*/
	if (user_comm == NULL)
		return (NULL);

	token = strtok(lineptr, " \n\t\r");
	for (i = 0; token != NULL; i++)
	{ /*fills current slot before going to next token*/
		user_comm[i] = token;
		token = strtok(NULL, " \n\t\r");
	}
	user_comm[i] = NULL;
	return (user_comm);
}

