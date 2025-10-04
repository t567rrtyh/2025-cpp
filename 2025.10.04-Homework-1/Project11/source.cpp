#include <stdio.h>

int main() {
    long long int N = 0;
    scanf_s("%d", &N);
    printf("%lld", ((N + 1) / 2) * ((N + 1) / 2));
    return 0;
}