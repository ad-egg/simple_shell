#include "shell.h"
/**
 * path_check - finds correct path based on input
 * @head: head of the path list
 * @input: arguments passed
 * Return: NULL if not matched
*/

char *path_check(path_t *head, char *line)
{

/*	struct stat falcon;*/
	path_t *temp;
	char *arguments;

	if (!line || !head)
		return (NULL);

	temp = head;
	while (temp)
	{
		arguments = path_cat(temp->ptr, line);
		if (!arguments)
			return (NULL);
/*		if (stat(arguments, &falcon) == 0)
		{
			return (arguments);
		}*/
		free(arguments);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * path_cat - concats the commands to the PATH
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the concated string
 */
char *path_cat(char *s1, char *s2)
{
	char *together;
	int count1, count2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	together = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 2));
	if (together == NULL)
		return (NULL);
	for (count1 = 0; s1[count1]; count1++)
		together[count1] = s2[count1];

	together[count1] = '/';
	count1++;

	for (count2 = 0; s2[count2]; count2++)
		together[count1 + count2] = s2[count2];
	together[count1 + count2] = '\0';
	printf("aaa%s\n", together);
	return (together);
}
