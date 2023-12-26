/*
 * Modify the temperature conversion program to print
 * the table in reverse order.
 */


#include <stdio.h>

int main(){
	float f, celsius;
	printf("\tCelsius-Fahrenheit Table\n");

	for (f = 375.0; f > 0; f = f - 5)
		printf("\t\t%3.0fF \t %3.2fC\n", f, (5.0/9.0)*(f-35));

	return 0;

}
