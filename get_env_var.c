#include "athena.h"

/**
 * find_match - finds a match at the beginning of a string
 * @s1: pointer to string to be compared against
 * @s2: points to string to be compared
 * Return: 0 if match, 1 if not match
 */
int find_match(const char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
		i++;
	if ((s1[i] == '\0') && (s2[i] == 61))
	/* 61 is ASCII value for equal sign */
		return (0);
	else
		return (1);
}

/**
 * _getenv - gets an environment variable
 * @name: name of environment variable to be gotten
 * Return: pointer to the environment variable
 */
char *_getenv(const char *name)
{
	int i, n;
	char *here = NULL;

	for (i = 0; environ[i] != NULL; i++)
	{
		n = find_match(name, environ[i]);
		if (n == 0)
			break;
	}
	here = environ[i];
	return (here);
}

/**
 * getpath - gets the PATH
 * Return: PATH string
 */
char *getpath(void)
{
	char *name = "PATH";
	char *string = NULL;

	string = _getenv(name);
	return (string);
}
