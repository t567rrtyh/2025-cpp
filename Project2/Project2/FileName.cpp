#include <stdio.h>

int main(int argc, char** argv)
{
	int he = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	scanf_s("%d", &he);
	for (i = 1; i <= he; i++) {
		for (j = 1; j <= he - i; j++) {
			printf(" ");
		}
		for (k = 1; k <= (2 * i - 1); k++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= he - 1; i++) {
		for (j = 1; j <= i; j++) {
			printf(" ");
		}
		for (k = 1; k <= (2 * (he - i) - 1); k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}