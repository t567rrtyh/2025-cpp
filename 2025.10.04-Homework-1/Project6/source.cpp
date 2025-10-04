#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>


int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d ", (a+b-1) - a);
	printf("%d", (a + b - 1) - b);
	return 0;
}