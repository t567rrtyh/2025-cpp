#include <cstdio>

int main() {
    double x = 0.00;
    double y = 0.00;
    int d = 1;
    scanf_s("%lf", &x);
    scanf_s("%lf", &y);
    while (x < y) {
        x = x * 1.15;
        d = d + 1;
    }
    printf("%d", d);
    return 0;
}