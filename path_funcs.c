#include "shell.h"
/* functions needed to create and handle the path */

/**
 * path_gen - generates the path
 * Return: head
*/
path_t *path_gen(void)
{
	path_t *head;
	path_t *node;
	char *the_path, *token;

	the_path = NULL;
	node = malloc(sizeof(path_t));/* node in linked list */
	if (!node)
		return (NULL);

	the_path = env_find("PATH"); /* points to variable list */
	if (!the_path)
	{
		free(the_path);
		return (NULL);
	}

	token = _strtok(the_path, ":"); /*splits the path into tokens */
	head = node;
	
	while (token)
	{
		node->ptr = _strdup(token);
		token = _strtok(NULL, ":"); /*replaces with NULL*/
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
	free(the_path);
	return (head);
}
