#ifndef DOG_H
#define DOG_H
/**
 * struct dog - list dates about pet
 * @name: pet name
 * @age: pet age
 * @owner: pet Owenr name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog - rename strucut with tyedef
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */

