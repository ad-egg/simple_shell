#include "shell.h"

/**
 * _realloc - reallocates an exisiting block of memory
 * @ptr: pointer
 * @before: orignal allocated space in memory
 * @after: newly allocated space
 * Return: pointer to new allocation
 */
void *_realloc(void *ptr, unsigned int before, unsigned int after)
{
	unsigned int count = 0;
	char *new;

	if (ptr == NULL)
		return (malloc(after));

	if (after == before)
		return (ptr);

	if (after == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(after);
	for (count = 0 ; count < after && count < before; count++)
		new[count] = ((char *)ptr)[count];
	return (new);
}
