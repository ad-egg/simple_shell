#include "shell.h"

/**
 * pth_free - frees the linked list associated with the PATH.
 * @head: pointer to the head node of the list.
 *
 * Return: void.
 */
void pth_free(path_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		pth_free(head->next);
	free(head->ptr);
	free(head);
}

/**
 * env_free - frees the linked list associated with the env.
 * @head: pointer to the head node of the list.
 *
 * Return: void.
 */
void env_free(path_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		pth_free(head->next);
	free(head);
}
