/*
 * Section 1.5.2 Character Counting
 */

#include <stdio.h>

// Count characterd in input; 1st version
int main() {

	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}