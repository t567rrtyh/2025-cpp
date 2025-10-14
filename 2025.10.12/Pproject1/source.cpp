#include <cstdio>
#include <cmath>

int main() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    int cnt = 0;
    if (dx == dy && dx != 0) {
        printf("Bishop\n");
        cnt = cnt + 1;
    }
    if (dx <= 1 && dy <= 1) {
        printf("King\n");
        cnt = cnt + 1;
    }
    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2)) {
        printf("Knight\n");
        cnt = cnt + 1;
    }
    if (x1 == x2 && (y2 - y1 == 1 || (y1 == 2 && y2 - y1 == 2))) {
        printf("Pawn\n");
        cnt = cnt + 1;
    }
    if ((x1 == x2 || y1 == y2) || dx == dy) {
        printf("Queen\n");
        cnt = cnt + 1;
    }
    if (x1 == x2 || y1 == y2) {
        printf("Rook\n");
        cnt = cnt + 1;
    }
    if (cnt == 0) {
        printf("Nobody\n");
    }
}