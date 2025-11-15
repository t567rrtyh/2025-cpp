#include <stdio.h>

int min(int a, int b, int c, int d);

int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    scanf_s("%d", &d);
    int res = min(a, b, c, d);
    printf("%d", res);
    return 0;
}
int min(int a, int b, int c, int d)
{
    if ((a <= b) && (a <= c) && (a <= d)) {
        return a;
    }
    else if ((b <= c) && (b <= d) && (b <= a)) {
        return b;
    }
    else if ((c <= b) && (c <= d) && (c <= a)) {
        return c;
    }
    else if ((d <= c) && (d <= b) && (d <= a)) {
        return d;
    }
}