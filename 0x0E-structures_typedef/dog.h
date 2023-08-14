#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 *
 * @name: name of dog
 * @age: age of the dog
 * @owner: dog owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_cute -Typedef for struct dog
 */
typedef struct dog dog_cute;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_cute *new_dog(char *name, float age, char *owner);
void free_dog(dog_cute *d);

#endif /* struct dog */
