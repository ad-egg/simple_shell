#include "shell.h"

/**
 * egg - takes input from the shell
 * @snail: the shell
 * Return: 0
*/
void egg(char *snail)
{
	char *line;
	char **args;
	int status, i;

	enviornment = _env();
	the_path = path_gen();
	line_count = 0;

	status = 1; /*keeps loop running while shell is open */
	while (status)
	{
		signal(SIGINT, sig_handler);
		line_count++;
		line = read_line();/*function to read a line*/
		if (line[0] == '\n')
		{
			free(line);
			continue;
		}
		args = split_line(line, "\n"); /*split line into arguments*/
		if (isit_built(args, line) == 1)
			status = execute_shell(args, snail); /*determine when to exit */

		i = 0;
		while (args[i] != NULL)
		{
			if (args[i])
				free(args[i]);
			i++;
		}
		if (line)
			free(line);
		if (args)
			free(args);
	}
	pth_free(the_path);
	pth_free(enviornment);
}
