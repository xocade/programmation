#include <stdio.h>
int main()
{
	printf("This program lists temperature conversion table");
	printf(" from Celsius to Fahrenheit.");
	printf("\n");
	printf("\n");

	float min = 0,
	      max = 375,
	      i   = 5;

	float fahrenheit = min;
	printf("\tCelcius To Fahrenheit Table\n");
	while (fahrenheit < max) {
		float celsius = (5.0/9.0) * (fahrenheit - 35);
		printf("\t\t%3.02fC \t %3.0fF.\n", celsius, fahrenheit);
		fahrenheit = fahrenheit + i;
	
	}


}
