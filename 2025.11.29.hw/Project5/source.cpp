#include <stdio.h>

struct Student {
    char first_name[50];
    char last_name[50];
    int math;
    int phys;
    int inf;
};

int main() {
    int n;
    scanf_s("%d", &n);
    struct Student students[100];
    int smath = 0;
    int sphys = 0;
    int sinf = 0;
    for (int i = 0; i < n; i++) {
        scanf_s("%s", students[i].last_name, 50);
        scanf_s("%s", students[i].first_name, 50);
        scanf_s("%d", &students[i].math);
        scanf_s("%d", &students[i].phys);
        scanf_s("%d", &students[i].inf);
        smath += students[i].math;
        sphys += students[i].phys;
        sinf += students[i].inf;
    }
    double srmath = (double)smath / n;
    double srphys = (double)sphys / n;
    double srinf = (double)sinf / n;
    printf("%.1lf ", srmath);
    printf("%.1lf ", srphys);
    printf("%.1lf", srinf);
    return 0;
}