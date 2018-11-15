#include "shell.h"
/**
 * split_line - tokenizes a buffer
 * @buffer: args to tokenize
 * @del: delemiter ""
 * Return: pointer to array of tokens
*/

char **split_line(char *buffer, char *del)
{
	char **tokens, *token;
	int i;

	tokens = malloc(sizeof(char) * 1024);
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
