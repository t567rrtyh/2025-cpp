#include <stdio.h>

int main() {
    int n = 0;
    int m1 = 0;
    int m2 = 0;
    scanf_s("%d", &m1);
    scanf_s("%d", &m2);
    if (m2 > m1) {
        int t = m1;
        m1 = m2;
        m2 = t;
    }
    do {
        scanf_s("%d", &n);
        if (n == 0) {
            break;
        }
        if (n > m1) {
            m2 = m1;
            m1 = n;
        }
        else if (n > m2 && n != m1) {
            m2 = n;
        }
    }
    while (n != 0);
    printf("%d", m2);
    return 0;
}