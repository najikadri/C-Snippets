#include <stdio.h>
#include <stdlib.h>


void terminate(void);

int main (void) {
	int nums[2][3] = {
			{4,8,6},
			{5,2,12}};
	int i;
	int j;
	for (i = 0; i < 2;i++){
		for (j = 0; j < 3;j++){
			printf("Number at %d in %d: %d\n",j+1,i+1,nums[i][j]);
		}
	}
	terminate();
	return 0;
}

void terminate (void) {
	printf("\n\nPress any key to continue...");
	getch();
}