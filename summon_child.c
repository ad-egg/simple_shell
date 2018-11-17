#include "athena.h"

/**
 * summon_child - forks a child process to execute a command
 * @argument - points to an array of strings
 */
void summon_child(char **argument)
{
	int i, status;
	pid_t childpid;

	childpid = fork();
	if (childpid == -1)
		perror("Error:");
	if (childpid == 0)
	{
		if (execve(argument[0], argument, NULL) == -1)
			perror("Error:");
	}
	else
		wait(&status);
}