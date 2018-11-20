#include "shell.h"
/**
 * read_line - reads the line
 * Return: 0
*/
char *read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0; /*will change according to input*/

	write(1, "$ ", 2);
	if (getline(&line, &bufsize, stdin) <= 0)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "\n", 1);
		shell_exit(NULL, line);
	}
	return (line);
}
