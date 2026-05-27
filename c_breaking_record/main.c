#include <stdio.h>
#include <stdlib.h>

int *breaking_records(int scores[], int n)
{
    int *result = malloc(2 * sizeof(int));
    if (result == nullptr)
        return nullptr;

    int min = 0, max = 0;
    int hscores = scores[0];
    int lscores = scores[0];

    for (int i = 0; i < n; i++)
    {
        if (scores[i] > hscores)
        {
            hscores = scores[i];
            ++max;
        }
        if (scores[i] < lscores)
        {
            lscores = scores[i];
            ++min;
        }
    }

    result[0] = max;
    result[1] = min;
    return result;
}

int main()
{
    int scores[] = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};
    int n = sizeof(scores) / sizeof(scores[0]);
    int *result = breaking_records(scores, n);
    printf("max: %d, min: %d\n", result[0], result[1]);

    free(result);
    return 0;
}
