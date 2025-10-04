#include <stdio.h>

int main() {
    long long int M = 0;
    long long int N = 0;
    scanf_s("%lld", &M);
    scanf_s("%lld", &N);
    printf("%lld", (M - 1) * (N - 1) + 1);
    return 0;
}