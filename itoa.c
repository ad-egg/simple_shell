#include <stdlib.h>
#include <stdarg.h>
#include "athena.h"

/**
 * rev_string - reverses a string
 * @s: this string will be reversed
 */
void rev_string(char *s)
{
	int a, b, c, len;

	a = 0;
	len = 0;

	while (s[len] != '\0')
		len++;

	b = len - 1;

	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		b--;
	}
}

/**
 * _itoa - converts integer into characters to be printed
 * @n: integer to be converted
 * @str: string to be written into
 */
void _itoa(int n, char *str)
{
	int i, n2;

	i = 0;

	if (n < 0)
		n2 = (n * (-1));
	else
		n2 = n;
	while (n2 > 0)
	{
		str[i] = ((n2 % 10) + '0');
		n2 = (n2 / 10);
		i++;
	}
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';

	rev_string(str);
}
