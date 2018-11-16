#include "shell.h"
/**
 * cmp_exec - compares arguments to executable commands
 * @args: argument recieved
 * @snail: shell
 * Return: 1
*/
int cmp_exec(char **args, char *snail)
{
	char *ex;

	if (args[0][0] = '/')
	{
		if (execve(args[0], args, NULL) == -1)
			errenous(args, snail, 3);
	}
	else
	{
		ex = (get_path(path, args[0]));
		if(!ex)
			errenous(args, snail, 1);
		if (execve(ex, args, NULL) == -1)
			__error(args, snail, 2);
	}
	return (1);
}
/**
 * execute - forks the current process then exectues the command
 * @args: arguemnt recieved
 * @eggs: shell
 * Return: -1, 0, 1
*/

int execute(char **args, char *turtle)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == 0)
	{
		cmp_exec(args, program);
		exit(0);
	}
	else if (child_pid == -1)
	{
		perror("Error: no fork");
		exit(99);
	}
	else
	{
		do {
			waitpid(child_pid, &status, WUNTRACED);
		} while (WIFEXITED(status) == 0 && WIFSIGNALED(status) == 0);
	}
	return (1);
}
