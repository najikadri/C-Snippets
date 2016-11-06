/**
 * A Program that uses structures and array to create students data
 * and display them afterwards
 */

#include <stdio.h>
#include "student.h"

void terminate (void);
void getint (int *num);
void new_student(int id, Student *student);

int main (void){
	int size;
	printf("Welcome to Elmore School\nPlease enter number of students: ");
	getint(&size);
	Student students[size];
	int i;
	for (i = 0; i < size;i++){
		new_student(i,&(students[i]));
	}
	printf("\n\nHere are the following students:");
	for (i = 0; i < size;i++){
		printf("\n\nStudent #%d",i+1);
		print_student(&(students[i]));
	}
	terminate();
	return 0;
}

void terminate (void){
	printf("\n\nPress any key to continue...");
	getch();
}

void getint (int *num){
	if(scanf("%d",num) == 0){
				fflush(stdin);
				printf("\nPlease enter a valid number\n\n");
				getint(num);
			}
}

void new_student (int id,Student *student){
	printf("\n\nStudent #%d\n\nEnter student's name: ",id+1);
	getchar();
	fgets(student->name,nameLength,stdin);
	printf("\nEnter student's age: ");
	getint(&student->age);
	printf("\nEnter student's gender (m/f): ");
	getchar();
	student->gender = getchar();
}