#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *print_dog-  prints struct dog
 *@d:struct
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	/*
	 * If an element of d is NULL,
	 * print (nil) instead of this element.
	 */
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
		return;
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
		return;
	}
	if (d-> age == 0.0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

