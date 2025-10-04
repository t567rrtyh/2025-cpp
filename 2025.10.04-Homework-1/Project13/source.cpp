#include <stdio.h>

int main() {
    long long int K = 0;
    long long int N = 0;
    scanf_s("%lld", &K);
    scanf_s("%lld", &N);
    printf("%lld ", (N - 1) / K + 1);
    printf("%lld", (N - 1) % K + 1);
    return 0;
}