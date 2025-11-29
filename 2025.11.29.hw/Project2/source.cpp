#include <stdio.h>

struct Point {
	int x;
	int y;
};

int main() {
	int n = 0;
	scanf_s("%d", &n);
	struct Point p[100];
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &p[i].x);
		scanf_s("%d", &p[i].y);
	}
	double sx = 0;
	double sy = 0; 
	for (int i = 0; i < n; i++) {
		sx += p[i].x;
		sy += p[i].y;
	}
	double ctx = sx / n;
	double cty = sy / n;
	printf("%.15lf ", ctx);
	printf("%.15lf", cty);
	return 0;
}