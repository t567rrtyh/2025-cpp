#include <stdio.h>
#include <math.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    scanf_s("%d", &d);

    for (int x = -100; abs(x) < 101; x++) {
        if (((a * x * x * x) + (b * x * x) + (c * x) + (d)) == 0) {
            printf("%d ", x);
        }
    }
    return 0;
}