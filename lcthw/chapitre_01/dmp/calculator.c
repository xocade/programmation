// Try this calculator.c
//
// Prompts the user to chose what operations to do.
//
// If addition, call addition(), and so on.
// quit = exit the loop.

#include <stdio.h>

#define ADDITION 1
#define SUBTRACTION 2
#define MULTIPLICATION 3
#define DIVISION 4

int greetings(void){
	printf("Hello, welcome to Calculateur!\n");
	printf("\n");
	
	return 0;

}

int main(){
	greetings();
	printf("Choose among these operations:\n");
	printf("\t1. Addition\n");
	printf("\t2. Subtraction\n");
	printf("\t3. Multipilication\n");
	printf("\t4. Division\n\n");
	printf("What do you want to do? ");
	
	char operation[20],
	     addition[15] = "addition";
	scanf("%s", &operation);
	
	if (operation == 'addition'){
		printf("Addition, nice.\n");
	}
	else {
		printf("Nice.\n");
	}


	printf("%s\n", operation);
	
	return 0;	

}
