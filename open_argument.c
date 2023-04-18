#include "includeme.h"

/**
 * openWar - execve example
 * @inputArray: idk
 * Return: Always 0.
 */

/*
 *		known bugs
 *
 * it forks even if it is not able to run, like a directory
 * 	Try making a child's return value from this function cause the caller to just straight exit everything
 * 		can do this via continue
 * 			attempted via return. caused it to fail all checks besides presence
 *
 *		consider more checks via access instead
 */
int openWar(char **inputArray)
{
	int adultsOnly;
/*	inputArray++;*/
	if (!access(inputArray[0], X_OK) && !access(inputArray[0], R_OK))
	{

/*		printf("yes access.\nBefore execve\n");*/
/*		forking_for_filicide(inputArray);*/
		/* the old code in question is below, commented out*/
		adultsOnly = fork();
		if (adultsOnly == 0)
		{ /*if this is child*/
			if (execve(inputArray[0], inputArray, NULL) == -1)
			{
				perror("Error");
			}
/*			printf("After execve\n");*/
			return (100);/*all children that live this long return 100*/
		}
		else
		{
			wait(&adultsOnly);
		}
	}
	else
		perror("Error");/* printf("no access\n");*/
	return (0);
}
