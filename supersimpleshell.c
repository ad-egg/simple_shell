#include "athena.h"

/**
 * supersimpleshell - a super simple shell
 */
void supersimpleshell(void)
{
	int status = 1;
	char *line;
	char **args;
	int i, n;
	char *sp = " ";

	while (status)
	{
		line = prompt_getline();
		args = split_string(line);
		for (i = 0; args[i] != NULL; i++)
		{
			for (n = 0; args[i][n] != '\0'; n++)
				;
			write(STDOUT_FILENO, args[i], n);
			if (args[i + 1] != NULL)
				write(STDOUT_FILENO, sp, 1);
		}
		free(line);
		free(args);
	}
}

/**
 * main - opens a super simple shell
 * Return: always 0
 */
int main(void)
{
	supersimpleshell();

	return (0);
}
