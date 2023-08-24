#include <stddef.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer 
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t cmpt = 0;
	while (h != NULL)
    {
	    cmpt++;
	    h = h->next;
    }
    return (cmpt);
}
