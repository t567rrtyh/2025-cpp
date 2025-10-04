#include <stdio.h>

int main() {
    long long int A = 0;
    scanf_s("%lld", &A);
    printf("%lld ", (A % 1000) / 100 + (A % 100) / 10 + (A % 10) / 1);
    return 0;
}