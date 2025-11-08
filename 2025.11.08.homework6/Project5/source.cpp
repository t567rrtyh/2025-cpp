#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int n = 0;
    int cnt = 0;
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if ((arr[i] == arr[i - 1]) || (arr[i] == arr[i + 1])) {
            cnt++;
        }
    }
    if (cnt > 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    free(arr);
    return 0;
}