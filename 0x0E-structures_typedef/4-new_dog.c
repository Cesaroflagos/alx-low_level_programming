#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Starting point
 * @s: string
 * Return: c
 */
int _strlen(char *s)
{
int c;

c = 0;

while (s[c] != '\0')
{
c++;
}

return (c);
}

/**
 * *_strcpy - Starting point
 * @dest: character
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int len, a;

len = 0;

while (src[len] != '\0')
{
len++;
}

for (a = 0; a < len; a++)
{
dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int s1, s2;

s1 = _strlen(name);
s2 = _strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (s1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (s2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
