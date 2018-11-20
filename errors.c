#include "shell.h"

/**
 * errenous - handles erros
 * @args: arguments
 * @cmd: command that was passed from input
 * @errno: error
 * Return: void.
 */
void errenous(char **args, char *cmd, int errno)
{
	char *str;

	str = _itoa(line_count);
	write(STDOUT_FILENO, cmd, _strlen(cmd));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, str, _strlen(str));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, args[0], _strlen(args[0]));

	if (errno == 1)
	{
		write(STDOUT_FILENO, ": not found\n", 13);
		exit(127);
	}
	if (errno == 2)
	{
		write(STDOUT_FILENO, ": command not found\n", 21);
		exit(0);
	}
	if (errno == 3)
	{
		write(STDOUT_FILENO, ": no such file or directory\n", 29);
		exit(0);
	}
}
