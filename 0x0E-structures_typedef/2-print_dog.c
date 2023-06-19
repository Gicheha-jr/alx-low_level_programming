#include <stdio.h>

struct dog {
   char *name;
   float age;
   char *owner;
};

void print_dog(struct dog *d) {
	if (d == NULL) {
	return;
	}

	printf("Dog Information:\n");
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}

int main() {
	struct dog my_dog = { "Max", 3.5, "John" };

	print_dog(&my_dog);

	return 0;
}
