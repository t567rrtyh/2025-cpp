#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Compare(const char* S1, const char* S2);

int main(int argc, char* argv[])
{
    char S1[100];
    char S2[100];
    scanf_s("%99s", S1, (unsigned)sizeof(S1));
    scanf_s("%99s", S2, (unsigned)sizeof(S2));
    Compare(S1, S2);
    return 0;
}

bool Compare(const char* S1, const char* S2)
{
    if (strcmp(S1, S2) == 0) {
        printf("yes");
        return true;
    }
    else {
        printf("no");
        return false;
    }
}