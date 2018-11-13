#include "athena.h"

/**
 * split_string - splits a string
 * @line: string to be split
 * Return: pointer to array of arrays
 */
char **split_string(char *line)
{
	char **tokens, *token;
	int i, size;

	if (line == NULL)
		return (NULL);
	for (size = 0; line[size] != '\0'; size++)
		;
	tokens = malloc(sizeof(char) * size);
	if (tokens == NULL)
		return (NULL);
	token = strtok(line, " ");
	for (i = 0; token != NULL; i++)
	{
		tokens[i] = token;
		token = strtok(NULL, " ");
	}
	tokens[i] = NULL;
	return (tokens);
}
