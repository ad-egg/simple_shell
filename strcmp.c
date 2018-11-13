#include "athena.h"

/**
 * _strcmp - compares two strings
 * @s1: this string will be compared to s2
 * @s2: this string will be compared to s1
 * Return: 0 if s1 and s2 are equal, 1 if not
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	if ((s1[i] == '\0') && (s2[i] == '\0'))
		return (0);
	else
		return (1);
}
