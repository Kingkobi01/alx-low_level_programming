#ifndef __COMMON_H__
#define __COMMON_H__
/**
 * struct dog - ...
 * @name : ...
 * @age : ...
 * @owner : ...
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
