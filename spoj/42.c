#include <stdio.h>

int main(void) {

	const int rat = 42;
	int deepthought = 0; 
	while (rat != deepthought) {
		scanf("%i", &deepthought);
		printf("%i\n", deepthought);
	}
	printf("The answer to the question of \n");
	printf("life, the universe, and everything, \n");
	printf("is %i.\n", deepthought);

}
