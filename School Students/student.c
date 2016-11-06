#include <stdio.h>
#include "student.h"

void print_student (Student *student){
	printf("\n\nStudent Name: %sStudent Age: %d\nStudent Gender: %s",student->name,student->age,get_gender(student->gender));
}

char* get_gender (char g){
	if (g == 'm'){
		return "Male";
	}else if ( g == 'f'){
		return "Female";
	}else {
		return NULL;
	}
}