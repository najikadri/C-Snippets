/**
* struct is a structure that acts as a class and typedef define a structure as a class
*/
#include <stdio.h>
#include <stdlib.h>

void terminate(void);

typedef struct{
	char name[25];
	int age;
} Person;

int main(void){
	Person kevin ={"Kevin Berret", 23};
	printf("Hi I'm %s and I'm %d years old",kevin.name,kevin.age);
	terminate();
	return 0;
}

void terminate (void){
	printf("\n\nPress any key to continue...");
	getch();
}
