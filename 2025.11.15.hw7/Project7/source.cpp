#include <stdio.h>

int fi(int n);

int main(int argc, char* argv[]) {
    int n = 0;
    scanf_s("%d", &n);
    int res = fi(n);
    printf("%d", res);
    return 0;
}

int fi(int n) {
    if (n <= 1) return 1;
    int a = 1, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}