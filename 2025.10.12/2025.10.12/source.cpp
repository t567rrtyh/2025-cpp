#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	if (((a % 10) + (((a % 100) / 10)) + (((a % 1000) / 100))) == ((((a % 10000) / 1000)) + (((a % 100000) / 10000)) + (((a % 1000000) / 100000)))) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}
