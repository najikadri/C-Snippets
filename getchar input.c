#include <stdio.h>
#include <stdlib.h>


void terminate(void);

int main (void) {
	char sent[15];
	char c;
	int i = 0;
	puts("Enter your sentence: ");
	while ((c = getchar()) != '\n' && i < 15){
		sent[i++] = c;
	}

	sent[i] = '\0';
	puts("The sentence entered is:");
	puts(sent);
	terminate();
	return 0;
}

void terminate (void) {
	printf("\n\nPress any key to continue...");
	getch();
}
