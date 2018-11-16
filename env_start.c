#include "shell.h"
/**
  * env_start - creates a new enviornment variable from input
  * @str: input string
  * @value: value of new variable
  * Return: 0
*/

void env_start(char *str, char *value)
{
	path_t *var, *copy, *node;
	char *val, *new_env;
	int val_len = 0, len = 0, counter = 0;

	if(!str || !value)
	{
		perror("something has gone terribly wrong");
		exit(0);
	}

	len = env_find(str);

	node = malloc(sizeof(path_t));
	if (!node)
	{
		perror("error, error, error");
	}

	val = _strcat(str, "=")
	val_len = _strlen(val);
	new_env = realloc(val, val_len, (val_len + _strlen(value) + 1));
	_strncpy(new_env, value, val_len);

	copy = env;
	node = env;

	if(len >= 0)
	{
		while (count != (len - 1))
		{
			node = node->next;
			copy = copy->next;
			count++;
		}
		copy = copy->next;
		new_env->ptr = node;
		new_env->next = node=>next->next;
		node->next = new_env;
		free(copy);
	}
	else
	{
		while (node->next != NULL)
		{
			node = node->next;
		}
		new_env->ptr = node;
		node->next = new_env;
		new_env->next = NULL;
	}
	free(val);
}
