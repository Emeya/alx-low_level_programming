#ifendef DOG_H
#define DOG_H

 

/**
  * struct dog - a dog;s basic information
  * @name: Dog first name
  * @age: Age of dog
  * @owner: Owner of dog
  *
  * Description: Longer description
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
  
  
void init_dog(struct dog *d, char *name, float age, char *owner);
voif print_dog(struct dog *d);
dog_t *new_dog(chsr *name, float age, char *owner);
void free_dog (dog_t *d);
char *_strcpy(char *dest, char *scr);
int _dtrlen(char *s);

#endif

