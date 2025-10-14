#include<cstdio
int main(int argc, char** argv)
{
	int N = 0;
	scanf_s("%d", &N);
	if (N % 2 == 0) {
		printf("%d", N / 2);
	}
	else if (N == 1) {
		printf("%d", 0);
	}
	else {
		printf("%d", N);
	}
	return 0;
}
