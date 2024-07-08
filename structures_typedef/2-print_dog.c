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
	/*If d is NULL print nothing*/
	if (d == NULL)
	{
		printf(" ");
	}
	/*
	 * If an element of d is NULL,
	 * print (nil) instead of this element.
	 */
	if (d->name == NULL)
	{
		return;
	}
	if (d->age == 0.0)
	{
		printf("Age: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	/**/
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

