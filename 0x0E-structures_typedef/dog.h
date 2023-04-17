#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog type data
 * @name: name
 * @age: age
 * @owner: owner
 *
 * my new struct dog with arguments name, age, owner
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

dog_t *new_dog(char *name, float age, char *owner);
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
