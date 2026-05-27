#include <stdio.h>
#include <stdlib.h>

int *two_sum(int nums[], int n, int target)
{
    int *indices = malloc(2 * sizeof(int));
    if (!indices)
        return nullptr;

    int left = 0, right = n - 1;
    while (left < right)
    {
        int sum = nums[left] + nums[right];
        if (sum == target)
        {
            indices[0] = left;
            indices[1] = right;
            return indices;
        }
        else if (sum < target)
            left++;
        else
            right--;
    }

    free(indices);
    return nullptr;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int num = 52;
    int n = sizeof(arr) / sizeof(arr[0]);

    int *indices = two_sum(arr, n, num);
    if (!indices)
        printf("no index found.\n");
    else
    {
        printf("indices: %d, %d\n", indices[0], indices[1]);
        free(indices);
    }
    return 0;
}
