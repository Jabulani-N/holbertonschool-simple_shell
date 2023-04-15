
#include "includeme.h"


		/**
		 * main - execve example
		 *
		 * Return: Always 0.
		 */
int openWar(char **inputArray)
{
/*	inputArray++;*/
	if (!access(inputArray[0], X_OK))
	{

		printf("yes acess.\nBefore execve\n");
		if (execve(inputArray[0], inputArray, NULL) == -1)
		{
			perror("Error");
		}
		printf("After execve\n");

	}
	else
		printf("no access\n"), perror("Error");
	return (0);
}

