#include <stdio.h>

int main() {
    long long int A = 0;
    long long int B = 0;
    scanf_s("%lld", &A);
    scanf_s("%lld", &B);
    if ((A % B == 0) || (B % A == 0)) {
        printf("%lld", 1);
    }
    else {
        printf("%lld", 544);
    }
    return 0;
}