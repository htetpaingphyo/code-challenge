#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, temp = 0;

    for (int i = 0; i < n; i++)
    {
        temp = a;
        a = b;
        b = temp + b;
        printf("%d%c", a, (i < n - 1) ? ' ' : '\n');
    }
}

int main()
{
    int n = 20;
    fibonacci(n);
    return 0;
}