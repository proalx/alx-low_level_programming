#include <stdlib.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog- struct to print dog
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	if(d==NULL)
		return;
		
	if(d->name==NULL)
		d->name="(nil)";
	if(d->owner==NULL)
		d->owner="(nil)";
	
        printf("the name %s", d->name);
	printf("age %f",d->age);
	print("owner %s",d->owner);
}
