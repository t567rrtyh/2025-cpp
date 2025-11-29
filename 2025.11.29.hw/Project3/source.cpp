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
            double dx = p[i].x - p[j].x;
            double dy = p[i].y - p[j].y;
            double d = sqrt(dx * dx + dy * dy);
            if (d > maxd) {
                maxd = d;
            }
        }
    }
    printf("%.15lf", maxd);
    return 0;
}