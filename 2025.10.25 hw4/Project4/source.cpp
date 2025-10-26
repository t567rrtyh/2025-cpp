#include <stdio.h>
#include <math.h>
#define MAXS 100

int main(int argc, char* argv[]) {
    int n = 0;
    int c[MAXS];
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &c[i]);
    }
    int x = 0;
    scanf_s("%d", &x);
    int mnrazn = abs(c[0] - x);
    int mn = c[0];
    for (int i = 0; i < n; i++) {
        int razn = abs(c[i] - x);
        if (razn < mnrazn) {
            mnrazn = razn;
            mn = c[i];
        }
        else if ((razn == mnrazn) && (c[i] < mn)) {
            mn = c[i];
        }
    }
    printf("%d", mn);
    return 0;
}