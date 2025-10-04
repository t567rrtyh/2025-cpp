#include <stdio.h>

int main() {
    long long int A = 0;
    scanf_s("%lld", &A);
    printf("%lld ", (A % 100)/10);
    return 0;
}