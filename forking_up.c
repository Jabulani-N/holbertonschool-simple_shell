#include "includeme.h"
/**
 * forking_for_filicide -- fork the parent and execute the child
 *
 * @funk: the child
 *
 *Return: void
 */
void forking_for_filicide(char **funk)
{
	int id;
	int status;

	id = fork();

	if (id == -1)
	{
		perror("Error");
		return;
	}
	else if (id == 0)
	{
		if( execve(funk[0], funk, NULL))
		{
			perror("Error ");
		/*	free(funk);*/
		/*	exit(status);*/
		}
	}
	else
	{
		wait(&status);
	}
	return;
}
