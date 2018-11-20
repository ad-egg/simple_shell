#include "shell.h"
/**
 * _numlen - length of number being passed.
 * @n: the number being passed.
 *
 * Return: the length of the number.
 */
int _numlen(int n)
{
	int numlen = 0;

	while (n / 10 != 0)
	{
		numlen++;
		n /= 10;
	}
	return (numlen);
}

/**
 * _itoa - takes passed int and converts it to a string.
 * @num: integer passed to be printed.
 *
 * Return: string converted from integer passed.
 */
char *_itoa(int num)
{
	char *st;
	int ct = 0, place = 0, divider = 1000000000;
	int len = _numlen(num);

	st = malloc(len * sizeof(char) + 1);
	if (!st)
		return (NULL);

	if (num < 10)
	{
		st[ct++] = num + '0';
		st[ct] = '\0';
		return (st);
	}

	while (divider)
	{
		place = (num / divider) % 10;
		if (place != 0 || (len >= 0 && st[ct - 1] >= '0'))
		{
			st[ct] = place + '0';
			ct++;
			len--;
		}
		divider /= 10;
	}
	st[ct] = '\0';
	return (st);
}

