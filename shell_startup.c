#include "includeme.h"
/**
 * main - automatically runs when program starts
 * @ac: number of input args
 * @av: array of input args
 * @env: array of environmental data
 * Return: always 0
 */
int main(int ac, char **av, char **env)
{ /*this set of inputs gives us the env of main*/
/*	it will me stored in the string array env[]*/

	(void) ac;
	(void) av;

	disunifiedField(env);

	return (0);
}

/**
 * disunifiedField - print prompt until exit or program summon
 * read user input, repeating until "exit" is entered
 * attempts to open file with same name as user input
 * @environment: string array of environment info from main
 * Return: on successful exit
 */

/*rename me to Mystic Square and make disunified field the fork*/
int disunifiedField(char **environment)
{
	int charCount;
	char *input;
	size_t j = 0;

	environ = environment;

	/*input = NULL;*/
	while (j == 0)
	{
		printf("\"There's no distinction between science and magic.\" ☆ ");
		charCount = getline(&input, &j, stdin);
	/*becuase starting atNULL and 0, getline will allocate for us*/
		if (charCount == -1)
		{
			free(input);
			perror("getline failed\n");
			return (-1);
		}
		if (_strcmp(input, "\n") == 0)
			free(input);
		else
		{
			if (_strncmp(input, "exit\n", 5) == 0 || _strncmp(input, "exit ", 5) == 0)
			{ /*do strncmp for it matching "exit " or "exit\n"*/
				free(input);
				return (0);
			}
			if (cleansed_crystal_mirror(input) == 100)
			{ /*you have a child at 100 days*/
				return (0);
			}
		}
		j = 0;
	}
	/* we should not be able to arrive here. the only way out of the abov*/
	/*loop should be return (0) via "exit" */
	printf("this line should never run\n");
	return (-1);
}

/**
 * cleansed_crystal_mirror - aids in judging input
 * @input: input
 * Return: nothing
 */

int cleansed_crystal_mirror(char *input)
{
	char **inputArray;

	if (input != NULL)
	{
/*printf("This is where we'll call a function with\n%s\nto try*/
/*to open file\n%s\n", input, input);*/
		inputArray = stray_cat(input);
		if (inputArray == NULL)
			perror("input string either stayed null or got turned\n");
		else
			if (openWar(inputArray) == 100)
			{ /*open war returns 100 if it is a child*/
				free(inputArray);
				free(input);
				return (100);
			}
		free(inputArray);
	}
	free(input);
	return(0);
}
