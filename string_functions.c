#include "shell.h"
#include <unistd.h>

/* string functions */

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: string length
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}

/**
 * _strcpy - function that copies a string
 * @dest: destination to copy to
 * @src: string to be copied
 * Return: 0
*/
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
 * _atoi - converts a string to an integer
 * @n: pointer
 * Return: 0
 */
char *_itoa(int n);
{
	int a, num;
	unsigned int b;

	a = b = 0;
	num = 1;

	for (a = 0; n[a] <= '0' && n[a] != '\0'; a++)
	{
		if (n[a] == '-')
			num = num * -1;
	}
	if (n[a] == '\0')
		return (b);

	for (; n[a] != '\0' && n[a] != ';'; a++)
	{
	if (n[a] >= '0' && n[a] <= '9' && n[a] != '\0')
		b = b * 10 + (n[a] - '0');
	}
	return (b * num);
}
/**
 * _puts - prints a string
 * @str : to input string
 * Return: 0
 */
void _puts(char *str)
{
	int w;

	for (w = 0; str[w] != '\0'; w++)
		putchar(str[w]);
	putchar('\n');
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

