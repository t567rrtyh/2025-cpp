#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

int main() {
    int n;
    scanf_s("%d", &n);
    struct Point p[100];
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &p[i].x);
        scanf_s("%d", &p[i].y);
    }
    double maxd = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                double dx1 = p[i].x - p[j].x;
                double dy1 = p[i].y - p[j].y;
                double a = sqrt(dx1 * dx1 + dy1 * dy1);
                double dx2 = p[j].x - p[k].x;
                double dy2 = p[j].y - p[k].y;
                double b = sqrt(dx2 * dx2 + dy2 * dy2);
                double dx3 = p[k].x - p[i].x;
                double dy3 = p[k].y - p[i].y;
                double c = sqrt(dx3 * dx3 + dy3 * dy3);
                double d = a + b + c;
                if (d > maxd) {
                    maxd = d;
                }
            }
        }
    }
    printf("%.15lf", maxd);
    return 0;
}