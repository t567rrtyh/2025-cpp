#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned char ToUpper(unsigned char c);

int main(int argc, char* argv[])
{
    char c = 0;
    scanf_s("%c", &c);
    unsigned char res = ToUpper(c);
    printf("%c", res);
    return 0;
}

unsigned char ToUpper(unsigned char c)
{
    if ((c >= 97) && (c <= 122)) {
        return c - 32;
    }
    else {
        return c;
    }
}