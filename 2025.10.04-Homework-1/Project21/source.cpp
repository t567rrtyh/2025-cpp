#include <stdio.h>

int main() {
    int V, T;
    scanf_s("%d %d", &V, &T);
    printf("%d", ((V * T) % 109 + 109) % 109 + 1);
    return 0;
}