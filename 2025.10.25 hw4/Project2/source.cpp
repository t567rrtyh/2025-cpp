#include <stdio.h>
#define MAXS 100
int main(int argc, char* argv[]) {
    int n = 0;
    int c[MAXS];
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &c[i]);
    }
    int l = 0;
    int r = 0;
    scanf_s("%d", &l);
    scanf_s("%d", &r);
    int m = c[l - 1];
    int n = l;
    for (int i = l-1; i < r; i++) {
        if (m < c[i]) {
            m = c[i];
            n = i + 1;
        }
    }
    printf("%d ", m);
    printf("%d", n + 1);

    return 0;
}