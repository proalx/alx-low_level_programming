#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t cmpt = 0;
    while (h != NULL)
    {
	    if (h->str == NULL)
	    {
		    printf("[0] (nil)\n");
	    }
	    else
	    {
		    printf("[%lu] %s\n", h->len, h->str);
	    }
	    cmpt++;
	    h = h->next;
    }
    return (cmpt);
}
