#include <stdio.h>

int fast_pow(int base, int exp)
{
    int res = 1;
    while (exp > 0)
    {
        if (exp & 1)
            res *= base;
        base *= base;
        exp >>= 1;
    }
    return res;
}

bool is_armstrong_number(int n)
{
    int cnt = 0, sum = 0, tmp = n;

    while (tmp != 0)
    {
        cnt++;
        tmp /= 10;
    }

    tmp = n;
    while (tmp != 0)
    {
        int remainder = tmp % 10;
        sum += fast_pow(remainder, cnt);
        tmp /= 10;
    }

    return sum == n;
}

int main()
{
    int number;
    printf("Enter an integer [0~999]: ");

    if (scanf("%d", &number) != 1 || number < 0 || number > 999)
        return 1;

    printf("%d is %s\n", number, is_armstrong_number(number) ? "armstrong number" : "not armstrong number");

    return 0;
}