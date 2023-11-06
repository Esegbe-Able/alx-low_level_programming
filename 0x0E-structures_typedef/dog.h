#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that contains a dog's basic info
 * @name: 1st member of the struct
 * @age: 2nd member of the sruct
 * @owner: 3rd member of the struct
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
