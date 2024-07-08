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
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
		return;
	}
	if (d-> age == 0.0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner);
		return;
	}
	if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)\n");
		return;
	}
	else
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}

