#include <stdio.h>

int main() {
    int N = 0;
    int K = 0;
    scanf_s("%d", &N);
    scanf_s("%d", &K);
    if K % N == 0 {
        printf("%d ", K / N);
        printf("%d ", K % N);
        printf("%d", K % N);
    }
    else {
        printf("%d ", K / N);
        printf("%d ", K % N);
        printf("%d", N - (K % N));
    }
    
    return 0;
}