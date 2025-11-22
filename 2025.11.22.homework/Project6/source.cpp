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
    int word = 0;
    int mx = 0;
    int l = 0;
    int mxword = 0;
    for (int i = 0; i < N && s[i] != '\0' && s[i] != '\n'; ++i)
    {
        if (s[i] == ' ')
        {
            l = 0;
            word = i + 1;
        }
        else {
            l++;
        }
        if (l > mx) {
            mx = l;
            mxword = word;
        }
    }
    for (int i = mxword; i < mxword + mx; i++) {
        printf("%c", s[i]);
    }
    printf(" %d", mx);
}