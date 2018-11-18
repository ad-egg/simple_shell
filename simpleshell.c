#include "athena.h"

/**
 * main - a simple shell
 * Return: 0 on success, 1 on any failure
 */
int main(void)
{
	int status = 1, i, lcount = 0, n, lcountchars = 0;

	char *line = NULL, **args = NULL,
	*sp = " ", *sep = ":", *bath = NULL, 
	**tiles = NULL, **bricks = NULL, *eq = "=", *comp = NULL,
	*leave = "exit", *flora = "env", *prwd = "pwd";

	bath = getpath();/* got PATH */
	bricks = split_string(bath, eq);/* splits PATH from rest of string */
	tiles = split_string(bricks[1], sep);/* strtok the PATH directories */

	while (status)
	{
		lcount++;
		if (args != NULL)
			free(args);
		if (line != NULL)
			free(line);
		line = prompt_getline();
		/* prints prompt and get the line, should prob handle EOF in this func */

		args = split_string(line, sp);
		/* splits user input line into string of strings */
		comp = args[0];
		if (_strcmp(leave, comp) == 0)
			return (0);
		else if (_strcmp(flora, comp) == 0)
		{
			print_curr_env();
			continue;
		}
		else if (_strcmp(prwd, comp) == 0)
		{
			print_wd();
			continue;
		}

		for (n = 0; tiles[n] != NULL; n++)
		{
			if (_strcmp(tiles[n], comp) == 0)
				
		}
		if (tiles[n] == NULL)
		{
			printerror(comp, lcount);
		}
		free(args);
		free(line);
	}
	if (tiles != NULL)
		free(tiles);
	if (bath != NULL)
		free(bath);
	return (0);
}
