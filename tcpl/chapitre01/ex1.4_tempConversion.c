/*
 * Write a program to print the corresponding Celsius to
 * Fahrenheit
 */

#include <stdio.h>

int main(void)
{
	printf("print Celsius to Fahrenheit table\n\n");
	int steps = 20, max = 300;
	float fahr= 0.0;

	printf("\tCelsius\t\tFahrenheit\n");
	while (fahr <= max) {
		float celsius = (5.0 / 9.0) * (fahr - 32);
		printf("\t%6.2fC\t\t%3.0fF\n", celsius, fahr);
		fahr = fahr + steps;
	}

	return 0;
}
