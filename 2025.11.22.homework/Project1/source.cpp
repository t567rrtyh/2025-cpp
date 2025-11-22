#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

bool IsDigit(unsigned char c);

int main(int argc, char* argv[])
{
    char c = 0;
    scanf_s("%c", &c);
    bool res = IsDigit(c);
    if (res == true) {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}

bool IsDigit(unsigned char c)
{
    if ((c >= '0') && (c <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}