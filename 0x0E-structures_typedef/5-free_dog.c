typedef struct {
   char *name;
   float age;
   char *owner;
} dog_t;

void free_dog(dog_t *d) {
   if (d == NULL) {
      return;  // Return if the pointer is NULL
   }

   // Free the dynamically allocated memory for name and owner
   free(d->name);
   free(d->owner);

   // Free the memory for the dog structure itself
   free(d);
}
