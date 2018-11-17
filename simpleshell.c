#include "athena.h"

/**
 * main - a simple shell
 * @ac: number of arguments
 * @av: pointers to the arguments
 * @env: points to a NULL terminated array of arrays
 * Return: Always 0
 */
int main(int ac, char **av, char **env)
{
	int status, i;
	char *line = NULL, **args = NULL, *nocommand = ": command not found";
	char *sp = " ", *sep = ":", *leave = "exit", *flora = "env";
	char *bath, **tiles;

	status = 1;

	bath = getpath();
	/* got PATH */
	tiles = split_string(bath, sep);
	/* strtok the PATH */

	while(status)
	{
		if (line != NULL)
			free(line);
		if (args != NULL)
			free(args);
		line = prompt_getline();
		/* prints prompt and get the line, should prob handle EOF in this func */
		args = split_string(line, sp);
		/* splits user input line into string of strings */

		if (_strcmp(leave, args[0]) == 0)
			return (0);
		else if (_strcmp(flora, args[0]) == 0)
		{
			print_curr_env();
			continue;
		}
		else if (_strcmp() == 0)
		{
			print_wd();
			continue;
		}

		/* look through strtok'd PATH for match */
		/* if find, summon_child to execve, also store y/n in integer */

		/* if didn't find in PATH */
		{
			for (i = 0; args[0][i] != '\0'; i++)
				;
			write(STDOUT_FILENO, args[0], i);
			write(STDOUT_FILENO, nocommand, 19);
		}
		free(line);
		free(args);
	}
	free(bath);
	free(tiles);
	return (0);
}
