#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned char ToUpperlower(unsigned char c);

int main(int argc, char* argv[])
{
    char c = 0;
    scanf_s("%c", &c);
    unsigned char res = ToUpperlower(c);
    printf("%c", res);
    return 0;
}

unsigned char ToUpperlower(unsigned char c)
{
    if ((c >= 97) && (c <= 122)) {
        return c - 32;
    }
    else if ((c >= 65) && (c <= 90)) {
        return c + 32;
    }
}

