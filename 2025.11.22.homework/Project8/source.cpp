#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int const N = 1000;

void rep(char s[]);

int main(int argc, char* argv[])
{
    char s[N] = { 0 };
    for (int i = 0; i < N; ++i)
    {
        scanf_s("%c", &s[i]);
        if (s[i] == '\n')
        {
            break;
        }
    }
    rep(s);
    return 0;
}

void rep(char s[])
{
    int l = 0;
    for (int i = 0; i < N && s[i] != '\0' && s[i] != '\n'; i++) {
        for (int k = i + 1; k < N && s[k] != '\0' && s[k] != '\n'; k++) {
            if (s[i] == s[k]) {
                printf("%c", s[i]);
            }
        }
    }
}