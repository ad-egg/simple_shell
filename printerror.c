#include "athena.h"

/**
 * printerror - prints a message for when a shell command is not found
 * @arg: string to be printed
 * @lcount: integer to be converted into string and printed
 */
void printerror(char *arg, int lcount)
{
	int i, lcountchars;
	char *countstr = NULL;
	char *nocommand = ": command not found";

	for (i = 0; arg[i] != '\0'; i++)
		;
	write(STDOUT_FILENO, arg, i);
	write(STDOUT_FILENO, ": ", 2);
	countstr =_itoa(lcount);
	lcountchars = _strlen(countstr);
	write(STDOUT_FILENO, countstr, lcountchars);
	write(STDOUT_FILENO, nocommand, 19);
}
