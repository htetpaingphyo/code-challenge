#include <stdio.h>

void staircase(int n) {
    char hash = 35;
    for (int i = 0; i < n; ++i) {
        for (int j = n; j > i + 1; --j)
            printf(" ");
        for (int k = 0; k < i + 1; ++k)
            printf("%c", hash);
        printf("\n");
    }
}

int main() {
    staircase(10);
    return 0;
}
