#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
   char *name;
   float age;
   char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner) {

   dog_t *new_dog_ptr = (dog_t *)malloc(sizeof(dog_t));
   if (new_dog_ptr == NULL) {
      return NULL;
   }


   new_dog_ptr->name = (char *)malloc(strlen(name) + 1);
   new_dog_ptr->owner = (char *)malloc(strlen(owner) + 1);
   if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL) {

      free(new_dog_ptr->name);
      free(new_dog_ptr->owner);
      free(new_dog_ptr);
      return NULL;
   }


   strcpy(new_dog_ptr->name, name);
   strcpy(new_dog_ptr->owner, owner);


   new_dog_ptr->age = age;

   return new_dog_ptr;
}
