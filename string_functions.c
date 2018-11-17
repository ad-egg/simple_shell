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
