#include "athena.h"

/**
 * prompt_getline - prints prompt, gets line from standard input
 * Return: always 0
 */
char *prompt_getline(void)
{
	char *buffer = NULL;
	size_t buffer_size;
	char *prompt = "$ ";
	char *nline = "\n";

	write(STDOUT_FILENO, prompt, 2);
	getline(&buffer, &buffer_size, stdin);
	write(STDOUT_FILENO, nline, 1);
	return (buffer);
}

