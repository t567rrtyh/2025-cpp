#include <stdio.h>

double power(double a, int n);

int main(int argc, char* argv[]) {
    double a = 0;
    int n = 0;
    scanf_s("%lf", &a);
    scanf_s("%d", &n);
    double res = power(a, n);
    printf("%f", res);
    return 0;
}

double power(double a, int n)
{
    double s = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            s = (s * a);
        }
        a = (a * a);
        n = n / 2;
    }
    return s;
}