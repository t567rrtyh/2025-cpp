#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    if (a != 0) {
        printf("%d", a);
    }
    if (b == 1) {
        if (a != 0) {
            printf("+");
        }
        printf("x");
    }
    else if (b == -1) {
        printf("-x");
    }
    else if (b > 0) {
        if (a != 0) {
            printf("+");
        }
        printf("%dx", b);
    }
    else if (b < 0) {
        printf("%dx", b);
    }
    if (c == 1) {
        if (a != 0 || b != 0) {    
            printf("+");
        }
        printf("y");
    }
    else if (c == -1) {
        printf("-y");
    }
    else if (c > 0) {
        if (a != 0 || b != 0) {
            printf("+");
        }
        printf("%dy", c);
    }
    else if (c < 0) {
        printf("%dy", c);
    }
    if (a == 0 && b == 0 && c == 0) {
        printf("0");
    }
        return 0;
    }