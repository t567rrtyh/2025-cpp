#include <stdio.h>

int main() {
    long long int A = 0;
    long long int B = 0;
    scanf_s("%lld", &A);
    scanf_s("%lld", &B);
    int res = 1 + 543 * ((A % B != 0) * (B % A != 0));
    printf("%d", res);
    return 0;
}