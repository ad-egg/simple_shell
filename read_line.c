#include "shell.h"
/*
 * read_line - reads the line
 * Return: 0
*/
char *read_line(void)
{
	char *line = NULL;
	ssize_t bufsize = 0; /*will change according to input*/
	
	if (isatty(STDIN_FILEN0) == 1)
		write(1, "$", 2);
	if (getline(&line, &bufsize, stdin) <= 0)
	{	
		if (isatty(STDIN_FILEN0) == 1)
			write(STDOUT_FILEN0, "\n", 1);
		exit(NULL, line);
	}
	return (line);
}
