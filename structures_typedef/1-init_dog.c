#include <stdlib.h>
#include "dog.h"
/**
 *init_dog-  initialize a variable of type struct dog
 *@d:struct
 *@name: Name
 *@age: Age
 *@owner: Owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
