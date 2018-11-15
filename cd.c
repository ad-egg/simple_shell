#include "athena.h"

/**
 * changedir - changes directory
 * @path: the path
 * Return: new directory
 */
int changedir(char *path)
{
	return chdir(path);
}
