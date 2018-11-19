#include "athena.h"

/**
 * printerror - prints a message for when a shell command is not found
 * @arg: string to be printed
 */
void printerror(char *arg)
{
	int i;
	char *nocommand = ": command not found";

	for (i = 0; arg[i] != '\0'; i++)
		;
	write(STDOUT_FILENO, arg, i);
	write(STDOUT_FILENO, nocommand, 19);
}
