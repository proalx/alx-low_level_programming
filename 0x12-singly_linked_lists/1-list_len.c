#include <stddef.h>
#include "lists.h"

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
