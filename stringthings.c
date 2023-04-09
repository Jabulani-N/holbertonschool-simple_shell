#include "includeme.h"
/**
* _strlen - gives the length of a string
* @origin: the string
* Return:  the length of the string
*/
int _strlen(char *origin)
{
	int str = 0;

	while (origin[str])
		str++;
	return (str);
}

/**
 *_strcpy -- copies a string
 *@dest: the destination for the copy
 *@origin: the original string to copy
 *Return: the pointer to the destination of the copy
 */
char *_strcpy(char *dest, char *origin)
{
	int i;

	for (i = 0; origin[i] != '\0'; i++)
		dest[i] = origin[i];
	if (origin[i] == '\0')
		dest[i] = '\0';
	return (dest);
}
/**
 *_strcmp -compares two strings
 *@str1: string one
 *@str2: string two
 *Return: 0 if equal
 **/
int _strcmp(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i] && str2[i]; i++)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	return (str1[i] - str2[i]);
}

/**
 *_strncmp -- compares two strings to an assigned point
 *@str1: string 1
 *@str2: string 2
 *@n: assigned point
 *Return: difference betwee the ASCII values of the two strings or 0
 */
int _strncmp(char *str1, char *str2, unsigned int n)
{
	size_t i;

	for (i = 0; (str1[i] && str2[i]) && i < n; i++)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	return (str1[i] - str2[i]);
}
