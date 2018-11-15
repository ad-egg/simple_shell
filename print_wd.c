#include "athena.h"

/**
 * print_wd - prints working directory
 */
void print_wd(void)
{
	int i;
	char *cwd;

	cwd = malloc(1024);
	if (cwd == NULL)
		return;
	getcwd(cwd, 1024);
	for (i = 0; cwd[i] != '\0'; i++)
		;
	write(STDOUT_FILENO, cwd, i);
	free(cwd);
}
