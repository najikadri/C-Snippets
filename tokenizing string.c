#include <stdio.h>
#include <stdlib.h>

void terminate(void);

int main(void){
	char sent[36];
	char * token;
	printf("Enter a sentence to break into words:\n");
	fgets(sent,36,stdin);
	token = strtok(sent," ");
	printf("\nThe words are listed as:\n");
	while (token != NULL){
		printf("%s\n",token);
		token = strtok(NULL," ");
	}
	terminate();
	return 0;
}

void terminate (void){
	printf("\n\nPress any key to continue...");
	getch();
}