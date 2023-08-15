#ifndef poppy_H
#define poppy_H

/**
 * struct dog - basic dog struct
 * @name: dog name
 * @age: dog age
 * @owner: Dog owner
 * Description: DS for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
