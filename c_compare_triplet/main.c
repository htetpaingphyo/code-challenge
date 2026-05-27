#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int *compare_triplets(int a[], int b[], int n)
{
    int alice = 0;
    int bob = 0;

    int *result = malloc(2 * sizeof(int));
    if (!result)
        return nullptr;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
            alice++;
        else if (a[i] < b[i])
            bob++;
        else
            continue;
    }

    result[0] = alice;
    result[1] = bob;
    return result;
}

int main()
{
    int alice[MAX] = {5, 6, 7, 8, 9};
    int bob[MAX] = {3, 6, 9, 10, 12};
    int *result = compare_triplets(alice, bob, MAX);
    printf("alice: %d, bob: %d\n", result[0], result[1]);

    free(result);
    return 0;
}
