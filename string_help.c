#include "shell.h"

 * *_strdup - copies a string into a newly allocated space in memory.
 * @str: input string to copy.
 *
 * Return: returns a pointer to the copied string.
 */
char *_strdup(char *str)
{
	int ct;
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * (_strlen(str) + 1));

	if (s == NULL)
		return (NULL);

	for (ct = 0 ; str[ct] != '\0' ; ct++)
		s[ct] = str[ct];
	s[ct] = '\0';
	return (s);
}
/**
 * _strcmp - takes 2 strings and compares their sizes
 * @st1: the first input string to be compared.
 * @st2: the second input string to be compared.
 *
 * Return: 0 if strings are exactly the same size. If first string is longer
 * than the second string a positive number will be returned. If the first is
 *  shorter then a negative number will be returned.
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
 * _strcat - concatenates two strings.
 * @dest: first string
 * @src: second string
 *
 * Return: a pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	char *new_st;
	int ct1, ct2, st1 = 0, st2 = 0;

	while (dest[st1])
	{
		st1++;
	}
	while (src[st2])
	{
		st2++;
	}

	new_st = malloc(sizeof(st1 + st2 + 2));

	for (ct1 = 0 ; dest[ct1] != '\0' ; ct1++)
	{
		new_st[ct1] = dest[ct1];
	}

	for (ct2 = 0 ; src[ct2] != '\0' ; ct2++)
	{
		new_st[ct1] = src[ct2];
		ct1++;
	}
	new_st[ct1] = '\0';
	return (new_st);
}
char *_strcpy(char *dest, char *src)
{
        int sc, kd;

        for (sc = 0; src[sc] != '0'; sc++)
                ;
        for (kd = 0; dest[kd] != '0'; kd++)
                dest[kd] = src[sc];
        return (dest);
}
/**
 **_strcpy3 - copy string starting at specific index of DEST
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: len of dest
 *
 * Return: copied string
 */
char *_strcpy3(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++, n++)
		dest[n] = src[i];
	dest[n] = '\0';
	return (dest);
}
