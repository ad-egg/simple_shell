#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * read_line - reads the line
 * Return: 0
*/
char *read_line(void)
{
	char *line = NULL;
	ssize_t bufsize = 0; /*will change according to input*/
	
	
	write(1, "$", 2);
	getline(&line, &bufsize, stdin);
	return (line);
}
