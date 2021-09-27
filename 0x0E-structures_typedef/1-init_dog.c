#include "dog.h"
/**
 * init_dog- function name
 * @d: par1
 * @name: par2
 * @age: par3
 * @owner:par4
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
