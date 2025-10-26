#include <stdio.h>
#define MAXS 100
int main(int argc, char* argv[]) {
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    int g[MAXS] = { 0 };
    scanf_s("%d", &n);
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    scanf_s("%d", &d);

    for (int i = 0; i < n; i++) {
        g[i] = i + 1;
    }
    for (int i = a - 1, j = b - 1; i < j; i++, j--) {
        int z = g[i];
        g[i] = g[j];
        g[j] = z;
    }
    for (int i = c - 1, j = d - 1; i < j; i++, j--) {
        int z = g[i];
        g[i] = g[j];
        g[j] = z;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", g[i]);
    }
    return 0;
}