#ifndef DOG
#define DOG
/**
 * struct dog - dog structure
 * @name: title
 * @age: how old is the dog
 * @owner: the owner
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
