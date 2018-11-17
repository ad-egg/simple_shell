#include "shell.h"
#include <unistd.h>
/**
 * env - sets a linked list for the enviornment
 * Return: head of the linked list
*/
path_t *env(void)
{
	path_t *head;
	path_t *house;
	int count = 0;

	head = malloc(sizeof(path_t)); /*linked list*/
	if (!head)
		return(NULL);
	
	house = head; /*pointer to beginning of list */

	while (enviorn[count]) /*enviorn makes user enviornment*/
	{
		house->ptr = _strdup(enviorn[count]);/*dup variable into list*/
		if (enviorn[count + 1] != NULL)
		{
			house->next = malloc(sizeof(path_t));
			house = house->next;
		}
		count++;
	}
	house->next = NULL;
	return (head);
}

/**
 * env_find - searches for a match in the enviornment list
 * @var: argument passed in
 * Return: pointer to matched variable
*/
char *env_find(char *var)
{
	char *same, *store;
	path_t *node;
	unsigned int count;

	same = NULL;
	node = enviornment; /*runs enviornment list (man env)*/

	while (node)
	{
		count = 0;
	/*while there are arguments*/
		while (var[count]) 
		{
			if (var[count] != node->ptr[count])
				break;
	/** checks if the nodes are the same then sets it equal to the
	enviornment variable if theyre the samne*/
			if (var[count + 1] == '\0' && node->ptr[count + 1] == '=')
			same = node->ptr;
			count++;
		 }
		/** once we find a match exit loop*/
		if(same)
			break;
		node = node->next;
	}
	store = malloc(sizeof(char *) * (_strlen(same)));
	if(!same)
		return (NULL);
	_strcpy(store, same);
	return (store);
}
/**
 * env_matcher - finds the matching enviornment with the argument passed
 * @input: argument passed
 * Return: 0 on success, -1 if no match
*/
int env_match(char *input)
{
	path_t *peter;
	int count = 0, count_two = 0;

	peter = enviornment; /*setting enviornment*/
	while (peter)
	{
		count = 0;
		while(input[count] == peter->ptr[count])
		{
			count++;
			if (input[count + 1] == '\0' && (peter->ptr)[count + 1] == '=')
				return (count_two);
		}
		count_two++;
		peter = peter->next;
		if (peter == NULL)
			return (-1);
	}
	return (count_two);
}

