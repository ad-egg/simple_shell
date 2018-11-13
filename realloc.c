#include <stdlib.h>
#include "athena.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory block
 * @old_size: allocated space for ptr
 * @new_size: reallocated space for ptr
 * Return: pointer to reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; (i < old_size) && (i < new_size); i++)
			newptr[i] = ((char *)ptr)[i];
		free(ptr);
	}
	return (newptr);
}

