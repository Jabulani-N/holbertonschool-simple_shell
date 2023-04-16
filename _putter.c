/**
 * _puts - prints a string without a \n
 * @str: string to print
 * Return: void
 */

#include "includeme.h"

void _puts(char *str)
{
	unsigned int length;

	length = _strlen(str);

	write(STDOUT_FILENO, str, length);
}

