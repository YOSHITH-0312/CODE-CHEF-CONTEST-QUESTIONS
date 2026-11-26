#include <stdio.h>

int main() {
    int r;
    scanf("%d", &r);

    if (r > 2 && r <= 7) {
        printf("%d\n", 8 - r);
    }
    else {
        printf("5\n");
    }

    return 0;
}
