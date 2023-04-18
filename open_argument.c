#include "includeme.h"

/**
 * openWar - execve example
 * @inputArray: idk
 * Return: Always 0.
 */

/*
 *		known bugs
 * it forks even if it is not able to run, like a directory
 * 	Try making a child's return value from this function cause the caller to just straight exit everything
 * 		can do this via continue
 */
int openWar(char **inputArray)
{
	int adultsOnly;
/*	inputArray++;*/
	if (!access(inputArray[0], X_OK),)
	{

/*		printf("yes access.\nBefore execve\n");*/
/*		forking_for_filicide(inputArray);*/
		/* the old code in question is below, commented out*/
		adultsOnly = fork();
		if (adultsOnly == 0)
		{
			if (execve(inputArray[0], inputArray, NULL) == -1)
			{
				perror("Error");
			}
/*			printf("After execve\n");*/
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
