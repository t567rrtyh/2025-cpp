#include <stdio.h>
#define MAXS 100
int main(int argc, char* argv[]) {
    int n = 0;
    int cnt = 0;
    int c[MAXS];
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &c[i]);
    }
    int x = 0;
    scanf_s("%d", &x);
    for (int i = 0; i < n; i++) {
        if (x == c[i]) {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}