#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void terminate(void);
void upabc (char *ptr);

int main (void) {
	char str[] = "bad cat with big bat";
	printf("Before upper-casing abc: %s\n\n",str);
	upabc(&str);
	printf("After upper-casing abc: %s",str);
	terminate();
	return 0;
}

void terminate (void) {
	printf("\n\nPress any key to continue...");
	getch();
}

void upabc (char *ptr){

	while(*ptr != '\0'){
		if (*ptr == 'a' || *ptr == 'b' || *ptr == 'c'){
			*ptr = toupper(*ptr);
		}
		++ptr;
	}
}