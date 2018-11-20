#include "shell.h"
/**
 * word_count - counts words
 * @str: string
 * Return: number or words
 */
int word_count(char *str)
{
	int l;
	int count = 1;
	char delim = ' ';

	if (!str)
		return (-1);

	for (l = 0; str[l] != '\0'; l++)
	{
		if (str[l] == delim)
			count++;
	}
	return (count);
}

/**
 * split_line - tokenizes a buffer
 * @buffer: args to tokenize
 * @delim: delemiter ""
 * Return: pointer to array of tokens
*/

char **split_line(char *buffer, char *delim)
{
	char *tokens, *house;
	int count = word_count(buffer);
	int i = 0;
	char **words = malloc(sizeof(char *) * (count + 1));

	if (!words)
	{
		perror("Error\n");
		exit(99);
	}
	house = _strdup(buffer);
	if (!house)
	{
		perror("Error\n");
		return (NULL);
	}
	tokens = _strtok(house, delim);

	while (tokens)
	{
		words[i] = malloc(sizeof(char) * (_strlen(tokens) + 1));
		if (!words[i])
		{
			perror("Error");
			while (i >= 0)
			{
				free(words[i]);
				i--;
			}
			free(words);
			return (NULL);
		}
		_strcpy(words[i], tokens);
		i++;
		tokens = _strtok(NULL, delim);
	}
	words[i] = NULL;
	free(house);
	return (words);
}
