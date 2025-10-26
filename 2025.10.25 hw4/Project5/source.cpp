#include <stdio.h>
#define MAXS 100
int main(int argc, char* argv[]) {
    int n = 0;
    int c[MAXS];
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &c[i]);
    }
    for (int i = 0; i < n/2; i++) {
        int z = c[i];
        c[i] = c[n - i - 1];
        c[n - i - 1] = z;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}