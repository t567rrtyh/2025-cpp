#include <stdio.h>
#include <stdbool.h>

bool Election(bool x, bool y, bool z);

int main(int argc, char* argv[]) {
    bool x = 0;
    bool y = 0;
    bool z = 0;
    int temp = 0;
    scanf_s("%d", &temp);
    x = temp;
    scanf_s("%d", &temp);
    y = temp;
    scanf_s("%d", &temp);
    z = temp;

    bool res = Election(x, y, z);
    printf("%d", res);
    return 0;
}

bool Election(bool x, bool y, bool z)
{
    if ((x + y + z) <= 1) {
        return false;
    }
    else {
        return true;
    }
}