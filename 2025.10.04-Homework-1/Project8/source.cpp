#include <stdio.h>

int main() {
    int M = 0;
    int T = 0;
    scanf_s("%d", &M);
    scanf_s("%d", &T);

    int N = (int)((T / (double)M - 1) / 2);
    if ((1 + 3 * N * (N + 1)) % 2 == 0) {
        printf("Denis");
    }
    else {
        printf("Ivan");
    }
    return 0;
}