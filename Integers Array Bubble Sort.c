#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define size 5 //maximum size of array

void terminate(void);
void setuprand (void);
void sortarray (int arr[],int l);
void printarray (int arr[],int l);

int main (void) {
	int nums[5] = {1,5,8,12,7};
	int length = 5;
	printf("Array nums before sorting:\n");
	printarray(nums,length);
	sortarray(nums,length);
	printf("\n\nArray nums after sorting:\n");
	printarray(nums,length);
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

void sortarray (int arr[],int l) {
	int pass;
	int i;
	int hold;

	for (pass = 1; pass < l;pass++){
		for (i = 0; i < l-1;i++){
			if(arr[i] > arr[i+1]){
				hold = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = hold;
			}
		}
	}

}