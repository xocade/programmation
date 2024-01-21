/*
 * Verify that the expression getchar != EOF
 * is 0 or 1.
 */

#include <stdio.h>

int main(void)
{
	int ch;

	ch = getchar() != EOF; 
	printf("getchar() != EOF is %i\n", ch);
	
	return 0;
}
