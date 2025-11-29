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
	int maxd = -1;
	int maxi = 0;
	for (int i = 0; i < n; i++) {
		int d = p[i].x * p[i].x + p[i].y * p[i].y;
		if (d > maxd) {
			maxd = d;
			maxi = i;
		}
	}
	printf("%d", p[maxi].x);
	printf("%d", p[maxi].y);
	return 0;
}