#include "shell.h"
/* functions needed to create and handle the path */

/**
 * path_gen - generates the path
 * Return: pointer to the head of a list
*/
path_t *path_gen(void)
{
	path_t *head;
	path_t *node;
	char *t_path, *token;

	t_path = NULL;
	node = malloc(sizeof(path_t));/* node in linked list */
	if (!node)
		return (NULL);

	t_path = env_find("PATH"); /* env_findpoints to variable list */
	if (!t_path)
	{
		free(node);
		return (NULL);
	}

	token = _strtok(t_path, "=:;"); /*splits the path into tokens */
	head = node;

	while (token)
	{
		if (token)
		node->ptr = _strdup(token);
		token = _strtok(NULL, "=:;"); /*replaces with NULL*/
		if (token)
		{ /*put the token in the linked lists if it exists*/
			node->next = malloc(sizeof(path_t));
			if (!node->next)
			{
				pth_free(head);
				return (NULL);
			}
			node = node->next;
		}
		else
			node->next = NULL;
	}
	free(t_path);
	return (head);
}
