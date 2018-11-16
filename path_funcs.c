#include "shell.h"
/* functions needed to create and handle the path */

/**
 * path_gen - generates the path
 * Return: head
*/
path_t path_gen(void)
{
	path_t *head;
	path_t *node;
	char *path, *token;

	path = NULL;
	node = malloc(sizeof(path_t);/* node in linked list */
	if (!token)
		return (NULL);

	path = enviornment("PATH"); /* points to variable list */
	if (!path)
	{
		free(path);
		return (NULL);
	}

	token = strtok(path, "=:;") /*splits the path into tokens */
	head = node;
	
	while (token)
	{
		node->ptr = _strdup(token);
		token = _strtok(NULL, "=:;"); /*replaces with NULL*/
		if (token)
		{ /*put the token in the linked lists if it exists*/
			node->next = malloc(sizeof(path_t));
			if (!node->next)
			{
				let_itgo(head);
				return (NULL);
			}
			node = node->next;
		}
		else
			node->next = NULL;
	}
	free(path);
	return (head);
}
			
/**
 * let_itgo - frees linked list crated by the path
 * @head: head of the list
 * Return: nothing
*/
void let_itgo(path_t *head)
{
	if (!head)
		return;
	if (!head->next)
		let_itgo(head->next);
	free(head->ptr);
	free(head);
}
