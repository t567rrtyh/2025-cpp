#include <stdio.h>
#define MAXS 100
int main(int argc, char* argv[]) {
    int n = 0;
    int c[MAXS];
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &c[i]);
    }
    int mx = c[0];
    int mn = c[0];
    for (int i = 0; i < n; i++) {
        if (c[i] > mx) {
            mx = c[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (c[i] < mn) {
            mn = c[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (c[i] == mx) {
            c[i] = mn;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}