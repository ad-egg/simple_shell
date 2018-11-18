#include "athena.h"

/**
 * prompt_getline - prints prompt, gets line from standard input
 * Return: pointer to  line
 */
char *prompt_getline(void)
{
	char *buffer = NULL;
	size_t buffer_size;
	char *prompt = "$ ";

	write(STDOUT_FILENO, prompt, 2);
	getline(&buffer, &buffer_size, stdin);
	return (buffer);
}
