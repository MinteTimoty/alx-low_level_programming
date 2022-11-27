#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * lists_len _ show the number of elemnts of a list
 * @h : A linked list
 *
 * return : the number of elemntes of a list 
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
