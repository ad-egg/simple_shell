#include "athena.h"

/**
 * print_curr_env - prints address of env and environ
 */
void print_curr_env(void)
{
	int i, n;

	for (i = 0; environ[i] != NULL; i++)
	{
		for (n = 0; environ[i][n] != '\0'; n++)
			;
		write(STDOUT_FILENO, environ[i], n);
	}
}
