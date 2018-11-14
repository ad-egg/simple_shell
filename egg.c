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

	enviornment = env();
	path = path_gen();
	line_count = 0;

	status = 1; /*keeps loop running while shell is open */
	while (status)
	 {
		line_count = 0;
		line = read_line();/*function to read a line*/
		if (line[0] == '\n')
		{
			free(line);
			continue;
		}
	
		args = split_line(line);/*split line into arguments*/
		
		if (is_built(args, line) == 1)
			status = exectue(args, eggs); /*determine when to exit */
		
		i = 0;
		while (args[i] != NULL)
		{
			if (args[i])
				free(args[i]);
			i++;
		}
		free (line);
		free (args);
	}
	free(path);
	free(enviornment);
}		 
