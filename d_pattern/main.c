#include <stdio.h>

int main()
{
    int num = 0;
    printf("enter number for pattern: ");
    scanf("%d", &num);

    for (int i = 0; i < 2 * num - 1; ++i)
    {
        int spaces = i < num ? i : 2 * num - 2 - i;

        printf("*");
        for (int j = 0; j < spaces; ++j)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    return 0;
}
