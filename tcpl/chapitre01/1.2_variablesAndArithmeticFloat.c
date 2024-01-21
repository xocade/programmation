/*
 * Section 1.2 Variables and Arithmetic using Floating-point
 */

#include <stdio.h>

/* Prints Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300; floating-point version */

int main() {

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		// lower limit of temperature
	upper = 300;	// upper limit
	step = 20;		// step size

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}