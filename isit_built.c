#include "shell.h"
/**
 * isit_built - checks if there is a built in function
 * @args: arguments
 * @input: input
 * Return: built in function if found
*/

int isit_built(char **args, char *input)
{
	if (_strcmp(args[0], "exit") == 0)
	{
		shell_exit(args, input);
		return (0);
	}
	else if (_strcmp(args[0], "env") == 0)
	{
		print_enviornment();
		return (0);
	}
	else if (_strcmp(args[0], "setenv") == 0)
	{
		env_start(args[1], args[2]);
		return (0);
	}
	return (1);
}
