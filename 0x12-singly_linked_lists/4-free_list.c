#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *free_list - function to free list
 *@head: a pointer to a head
 *
 *Return: Void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp->str);
		free(tmp);
	}
}
