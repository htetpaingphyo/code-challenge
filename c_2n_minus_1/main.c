#include <stdio.h>

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            int x = i < j ? i : j;

            x = x < size - i ? x : size - i - 1;
            x = x < size - j ? x : size - j - 1;

            printf("%d ", n - x);
        }
        printf("\n");
    }
    return 0;
}
