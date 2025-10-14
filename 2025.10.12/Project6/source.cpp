#include<cstdio>
#include<cmath>

int main() 
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    if (a == 0 && b == 0 && c == 0) {
        printf("-1");
        return 0;
    }
    if (a == 0 && b == 0) {
        printf("0");
        return 0;
    }
    if (a == 0) {
        printf("1\n%.6lf", -1.0 * c / b);
        return 0;
    }
    double d = 1.0 * b * b - 4.0 * a * c;
    if (d < 0) {
        printf("0");
        return 0;
    }
    if (d == 0) {
        printf("1\n%.6lf", -1.0 * b / (2.0 * a));
        return 0;
    }
    double x1 = (-b - sqrt(d)) / (2.0 * a);
    double x2 = (-b + sqrt(d)) / (2.0 * a);
    if (x1 > x2) {
        double m = x1;
        x1 = x2;
        x2 = m;
    }
    printf("2\n%.6lf\n%.6lf", x1, x2);
}