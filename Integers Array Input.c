#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define size 5 //maximum size of array

void terminate(void);

void setuprand (void);

void printarray (int arr[],int l);

int main (void) {
	setuprand();
	int n[size];

	for (int i = 0; i < size; i++){
		int k = 0;
		printf("\nChoose number at %d: ",i+1);
		scanf("%d",&k);
		n[i] = k;
	}
	printarray(n,size);
	terminate();
	return 0;
}

void terminate (void) {
	printf("\n\nPress any key to continue...");
	getch();
}

void setuprand (void){
	srand(time(NULL));
}

void printarray (int arr[],int l) {
	for (int  i = 0; i < l;i++){
		printf("\nElement %d is: %d",i+1,arr[i]);
	}
}