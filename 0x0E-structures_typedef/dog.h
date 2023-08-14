#include <stdlib.h>

/**
* init_dog - a dog's basic info
* @name: First member
* @age: Second member
* @owner: Third member
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if(d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
