#include "shell.h"
/**
 * main - shell replica
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: 0
*/
int main(int argc, char **argv)  
{
	if (!argc)
		return (0);
	egg(argv[0]);

	return (0);
}
