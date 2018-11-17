#include "athena.h"

/**
 * split_string - splits a string
 * @line: string to be split
 * Return: pointer to array of arrays
 */
char **split_string(char *line, char *delim)
{
	char **tokens, *token;
	int i;

	tokens = malloc(sizeof(char) * 1024);
	if (tokens == NULL)
		return (NULL);
	token = strtok(line, delim);
	for (i = 0; token != NULL; i++)
	{
		tokens[i] = token;
		token = strtok(NULL, delim);
	}
	tokens[i] = NULL;
	return (tokens);
}
