#include <stdio.h>

int sub_array_division(int s[], int n, int d, int m)
{
    int count = 0;
    int current_sum = 0;

    if (m > n)
        return 0;

    // start sliding window and calculate the sum of first m elements
    for (int i = 0; i < m; i++)
        current_sum += s[i];

    // if the sum of m-th elements is equal to d, increase the count
    if (current_sum == d)
        count++;

    // sliding window and starts from m to n
    for (int i = m; i < n; i++)
    {
        // substitute the leftmost element and add the rightmost element to the window
        // [0 - m - 1] --- [m - n - 1]
        // s[i - m] is the leftmost and s[i] is the rightmost element of the window
        current_sum += s[i] - s[i - m];

        if (current_sum == d)
            count++;
    }

    return count;
}

int main()
{
    /**
    =============================
    | 1 | 2 | 1 | 3 | 1 | 2 | 2 |
    =============================
      0 ----- m   m --------- n
    */
    int d = 3, m = 2;
    int array[] = {1, 2, 1, 3, 1, 2, 2};
    int n = sizeof(array) / sizeof(int);
    printf("no. of times: %d\n", sub_array_division(array, n, d, m));
    return 0;
}
