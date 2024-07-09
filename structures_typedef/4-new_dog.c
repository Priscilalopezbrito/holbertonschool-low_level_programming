#include <stdlib.h>
#include "dog.h"
char *_strcpy(char *dest, char *src);

/**
 *new_dog- Creates a new dog
 *@name: Name
 *@age: Age
 *@owner: Owner
 *Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	/**/
	new_dog->name = malloc(sizeof(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	/**/
	new_dog->age = age;
	/**/
	new_dog->owner = malloc(sizeof(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);
	return (new_dog);
}








/**
 **_strcpy - copies string pointed to by src
 *@dest: ptr
 *@src: ptr
 *Return: ptr
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
