/*I'm the header file for this entire folder*/

#ifndef anythingHere_H
#define anythingHere_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

int disunifiedField (char **environment);
int openWar(char **inputArray);
char **stray_cat(char *lineptr);
int _strlen(char *origin);
char *_strcpy(char *dest, char *origin);
int _strcmp(char *str1, char *str2);
int _strncmp(char *str1, char *str2, unsigned int n);
void cleansed_crystal_mirror(char *input);
void forking_for_filicide(char **funk);
void _puts(char *str);

/*other definitions for malloc because others did it*/

#define BUFFER 1024

#endif

