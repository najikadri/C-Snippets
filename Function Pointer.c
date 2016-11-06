#include <stdio.h>
#include <stdlib.h>


void terminate(void);
void speak (char* (*as)(void)); //a functin pointer that returns a string
char* asdog (void);
char* ascat (void);

int main (void) {
	speak(&asdog);
	speak(&ascat);
	terminate();
	return 0;
}

void terminate (void) {
	printf("\n\nPress any key to continue...");
	getch();
}

void speak (char* (*as)(void)) {
	printf("I say %s ! Who am I?\n",as());
}

char* ascat (void){
	return "Meow";
}

char* asdog (void){
	return "Woof";
}

