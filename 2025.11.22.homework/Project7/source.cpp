#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int const N = 1000;

void palind(char s[]);

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
    palind(s);
    return 0;
}

void palind(char s[])
{
    int l = 0;
    for (int i = 0; i < N && s[i] != '\0' && s[i] != '\n'; i++) {
        l++;
    }
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - 1 - i]) {
            printf("no");
            return;
        }
    }
    printf("yes");
}