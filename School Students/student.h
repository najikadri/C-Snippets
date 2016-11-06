/*
 * student.h
 *
 *  Created on: Nov 6, 2016
 *      Author: Naji
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#define nameLength 26

typedef struct {
	char name[26];
	int age;
	char gender;
}Student;

void print_student (Student *student); //prints out the student

char* get_gender (char g); //return string representation of gender

#endif /* STUDENT_H_ */