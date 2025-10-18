#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 1;
    int n = 0;
    int c = 0;
    scanf_s("%d", &n);
    if (n == 0) {
        printf("%d", a);
    }
    else if (n == 1) {
        printf("%d", b);
    }
    else {
        while (n >= 2) {
            c = a + b;
            a = b;
            b = c;
            n = n - 1;
        }
        printf("%d", c);
    }
    return 0;
}