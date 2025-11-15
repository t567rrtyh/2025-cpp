#include <stdio.h>

const char* isprime(int x);

int main(int argc, char* argv[]) {
    int x = 0;
    scanf_s("%d", &x);

    const char* res = isprime(x);
    printf("%s",res);
    return 0;
}

const char* isprime(int x)
{
    if ((x > 1)) {
        if (x == 2) {
            return "prime";
        }
        for (int i = 2; i <= (x / 2); i++) {
            if (x % i == 0) {
                return "composite";
            }
        }
        return "prime";
        }
    }

