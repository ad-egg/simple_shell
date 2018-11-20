#include "shell.h"
/**
 * _strdup - duplicaets a string
 * @str: string
 * Return: duplicate
 */
char *_strdup(char *str)
{
	int count = 0;
	char *s = NULL;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * (_strlen(str) + 1));

	for (count = 0 ; str[count] != '\0' ; count++)
		s[count] = str[count];
	s[count] = '\0';
	return (s);
}
/**
 * _strcmp - compares two strings
 * @st1: 1st string to be compared
 * @st2: 2nd  string to be compared
 * Return: 0
 */
int _strcmp(char *st1, char *st2)
{
	while (*st1 != '\0' && *st2 != '\0' && (*st1 == *st2))
	{
		st1++;
		st2++;
	}

	if (*st1 == '\0' && *st2 == '\0')
		return (0);
	else
		return ((int)(*st1 - *st2));
}
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *Return: a pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	char *string = NULL;
	int ct1 = 0, ct2 = 0, st1 = 0, st2 = 0;

	while (dest[st1])
	{
		st1++;
	}
	while (src[st2])
	{
		st2++;
	}

	string = malloc(sizeof(st1 + st2 + 2));

	if (!string)
		free(string);
	for (ct1 = 0 ; dest[ct1] != '\0' ; ct1++)
	{
		string[ct1] = dest[ct1];
	}

	for (ct2 = 0 ; src[ct2] != '\0' ; ct2++)
	{
		string[ct1] = src[ct2];
		ct1++;
	}
	string[ct1] = '\0';
	return (string);
}

/**
 * _strcpy - copies a string
 * @dest: string to be copied into
 * @src: string to be copied
 * Return: pointer to the string copy
 */
char *_strcpy(char *dest, char *src)
{
	int sc = 0;

	for (sc = 0; src[sc] != '\0'; sc++)
		dest[sc] = src[sc];
	dest[sc] = '\0';
	return (dest);
}
/**
 **_strncpy - copy string at a specifix index
 * @dest: destinaton
 * @src: source
 * @n: index
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++, n++)
		dest[n] = src[i];
	dest[n] = '\0';
	return (dest);
}
