/*
 * Modify the temperature conversion program to print
 * a heading above the table.
 */

#include <stdio.h>

int main(void)
{
	printf("print Fahrenheit to Celsius table\n\n");
	int steps = 20, max = 300;
	float fahr= 0.0;

	printf("\tFahrenheit\tCelsius\n");
	while (fahr <= max) {
		float celsius = (5.0 / 9.0) * (fahr - 32);
		printf("\t%3.0fF\t\t%3.2fC\n", fahr, celsius);
		fahr = fahr + steps;
	}

	return 0;
}
