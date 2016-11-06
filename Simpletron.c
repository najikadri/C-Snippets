/***
 * Simpletron is a machine language simulator terminal where
 * the user can program through the terminal with SML
 * (Simpletron Machine Language). It simulate the programming with
 * machine code unlike high level languages.
 * This is my first successful attempt to finish Simpletron which
 * I couldn't make last year in Java language. This shows me how
 * C is better at implementing programming languages than Java does.
 *
 * Date of creation: 4th November 2016
 */

#include <stdio.h>
#include <stdlib.h>

#define READ 10
#define WRITE 11
#define LOAD 20
#define STORE 21
#define ADD 30
#define SUBTRACT 31
#define MULTIPLY 32
#define DIVIDE 33
#define HALT 43

void terminate (void);
int process (int operation,int operand,int mem[], int accum);

int main (void){

	int operation = 0; //the operation "instruction"
	int operand = 0; //the operand "value"
	int input = 0; //current input value
	int accumulator = 0; //the accumulator register
	int memory[100] = {0}; //memory of 100 slots

	while (operation != HALT){
		if(scanf("%d",&input) == 0){
			fflush(stdin);
			printf("\nIllegal input!!\n\n");
			continue;
		}
		operation = input/100;
		operand = input%100;
		if (input > 9999){
			printf("\nMax value of operand exceeded\n\n");
		}else if (input < 1000){
			printf("\nMissing number of values\n\n");
		}else{
		accumulator = process(operation,operand,memory,accumulator);
		}
	}

	terminate();
	return 0;
}

void terminate (void){
	printf("\n\nPress any key to terminate program...");
	getch();
}

int process(int operation, int operand,int mem[], int accum){
	switch(operation){
	case READ: printf("\n? ");scanf("%d",&mem[operand]);printf("\n");break;
	case WRITE: printf("\nProgram Output: %d\n\n",mem[operand]);break;
	case LOAD: mem[operand] = accum;break;
	case STORE: accum = mem[operand];break;
	case ADD: accum += mem[operand];break;
	case SUBTRACT: accum -= mem[operand];break;
	case MULTIPLY: accum *= mem[operand];break;
	case DIVIDE:
		if(operand != 0){
			accum /= mem[operand]
		}else{
			printf("\nimpossible to divide number with zero!\n\n");
		};break;
	case HALT: /**Do Nothing it will automatically terminate*/;break;
	default: printf("\nUnknown operation was entered...\n\n");break;
	}

	return accum;
}