#include "includeme.h"

/**
 * openWar - execve example
 * @inputArray: idk
 * Return: Always 0.
 */
int openWar(char **inputArray)
{
/*	inputArray++;*/
	if (!access(inputArray[0], X_OK))
	{

		printf("yes access.\nBefore execve\n");
		forking_for_filicide(inputArray);
		printf("After execve\n");

	}
	else
		printf("no access\n"), perror("Error");
	return (0);
}
