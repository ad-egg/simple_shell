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
	int i;

	write(STDOUT_FILENO, prompt, 2);
	getline(&buffer, &buffer_size, STDIN_FILENO);
	for (i = 0; buffer[i] != '\0'; i++)
	{
		if (buffer[i - 1] == '\n')
			buffer[i - 1] = '\0';
	}
	return (buffer);
}
