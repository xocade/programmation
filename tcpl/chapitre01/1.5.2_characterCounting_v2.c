/* 
 * Section 1.5.2: Character Counting
 */

#include <stdio.h>

/* Count characters in input; 2nd version */

int main() {

	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}

