#include <stdio.h>

int main() {
    int N = 0;
    int K = 0;
    scanf_s("%d", &N);
    scanf_s("%d", &K);
    printf("%d ", K / N);
    printf("%d ", K % N);
    printf("%d", (N - (K % N)) % N);
    return 0;
}