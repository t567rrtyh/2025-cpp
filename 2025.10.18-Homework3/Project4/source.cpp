#include <cstdio>

int main() {
    int n = 0;
    int p = 0;
    int c = 1;
    int m = 1;
    scanf("%d", &p);
    scanf("%d", &n);
    while (n != 0) {
        if (n == p) {
            c = c + 1;
            if (c > m) m = c;
        }
        else {
            c = 1;
            p = n;
        }
        scanf("%d", &n);
    }
    printf("%d", m);
}