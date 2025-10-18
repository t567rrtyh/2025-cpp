#include <stdio.h>

int main() {
    int n = 0;
    int t = 0;
    int now = 0;
    int max = 0;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &t);
        if (t > 0) {
            now = now + 1;
            if (now > max) {
                max = now;
            }
        }
        else {
            now = 0;
        }
    }
    printf("%d", max);
    return 0;
}