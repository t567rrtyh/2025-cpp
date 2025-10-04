#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>


int main(int argc, char** argv)
{
	int a = 0;
	scanf("%d", &a);
	printf("The next number for the number %d is %d.\n", a, a + 1);
	printf("The previous number for the number %d is %d.\n", a, a - 1);
	return 0;
}