#include <stdio.h>
int main()
{
	printf("This program lists temperature conversion table");
	printf(" from Fahrenheit to Celsius.");
	printf("\n");
	printf("\n");

	float min = 0,
	      max = 375,
	      i   = 5;

	float fahrenheit = min;
	printf("\tFahrenheit to Celsius Table\n");
	while (fahrenheit < max) {
		float celsius = (5.0/9.0) * (fahrenheit - 35);
		printf("\t\t%3.0fF \t %6.2fC.\n", fahrenheit, celsius);
		fahrenheit = fahrenheit + i;
	
	}


}
