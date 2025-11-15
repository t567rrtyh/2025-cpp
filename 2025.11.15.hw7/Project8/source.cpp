#include <stdio.h>

int bink(int n, int k);

int main(int argc, char* argv[]) {
    int n = 0;
    int k = 0;
    scanf_s("%d", &n);
    scanf_s("%d", &k);
    int res = bink(n, k);
    printf("%d", res);
    return 0;
}

int bink(int n, int k) {
    if ((k == 0) || (k == n)) { 
        return 1;
    }
    else {
        return bink(n - 1, k - 1) + bink(n - 1, k);
    }
}