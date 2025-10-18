#include <cstdio>

int main() {
    int a = 0;
    int b = 0;
    int nok = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    if (a > b) {
        nok = a;
    }
    else {
        nok = b;
    }
    while ((nok % a != 0) || (nok % b != 0)) {
        nok += 1;
    }
    printf("%d", nok);
    return 0;
}