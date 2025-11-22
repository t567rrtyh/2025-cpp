#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int const N = 1000;

void slova(char s[]);

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
    slova(s);
    return 0;
}

void slova(char s[])
{
    int cnt = 0;
    for (int i = 0; i < N; ++i)
    {
        if (s[i] == ' ')
        {
            cnt++;
        }
        if (s[i] == '\n')
        {
            cnt++;
            break;
        }
    }
    printf("%d", cnt);
    return;
}

