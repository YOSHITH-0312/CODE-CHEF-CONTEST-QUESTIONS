#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        if (k * 2 >= n && k <= n) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
