
#include "includeme.h"


		/**
		 * main - execve example
		 *
		 * Return: Always 0.
		 */
int openWar(char **inputArray)
{
	/**argv[] = {address of what gets run, av[1], av[2], NULL*/
	/*you can use an explicit address or a relative address*/
	/*this is literally just a ways of saying */
	/*	/bin/ls -l /usr/*/

/*
*	if (nargs < 1)
*	{
*		printf("usage: programName arguments\n");
*		perror("Error:");
*		return(0);
*	}
*/
       	/*above is obsolete because we already check for that*/


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

