/*
 * Modify the temperature conversion program to print the table
 * in reverse order, that is, from 300 degrees to 0.
 */

#include <stdio.h>

int main(void)
{
	printf("print Fahrenheit to Celsius table\n\n");
	int steps = 20, fahr = 300;
	float min = 0.0;

	printf("\tFahrenheit\tCelsius\n");
	while (fahr >= min) {
		float celsius = (5.0 / 9.0) * (fahr - 32);
		printf("\t%3.0fF\t\t%3.2fC\n", fahr, celsius);
		fahr = fahr - steps;
	}

	return 0;
}
