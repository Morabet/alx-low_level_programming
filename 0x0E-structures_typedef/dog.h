#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog type structure
 * @name: name of the dog.
 * @age: the age.
 * @owner: the type of the dog
 *
 * Description: defining a dog structure type.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
/**
 * init_dog -  initialize a variable of type struct dog.
 * @d: pointer to struct dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: string to name of the owner
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog -  print the struct dog.
 * @d: pointer to struct dog.
 *
 * Return: void.
 */
void print_dog(struct dog *d);
/**
 * new_dog -  create a new dog.
 * @name: pointer to the dog name.
 * @age: the dog age.
 * @owner: pointer to the dog owner.
 *
 * Return: pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner);
/**
 * free_dog -  free created dog.
 * @d: pointer to the dog.
 *
 * Return: void.
 */
void free_dog(dog_t *d);
#endif
