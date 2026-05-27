#include <stdio.h>

void apples_n_oranges(int s, int t, int a, int b, int apples[], int na, int oranges[], int no)
{
    /*  ------x----#--x--x---/|||\---x----#---xx-------  */
    /*  assume that x are fruits # are trees and /|||\ is house  */

    int acount = 0, ocount = 0;

    if (a > s || s > t || t > b)
        return;

    for (int i = 0; i < na; i++)
    {
        int boundary = a + apples[i];
        if (boundary >= s && boundary <= t)
            acount++;
    }

    for (int i = 0; i < no; i++)
    {
        int boundary = b + oranges[i];
        if (boundary >= s && boundary <= t)
            ocount++;
    }

    printf("apples: %d, oranges: %d\n", acount, ocount);
}

int main()
{
    int s = 7, t = 11, a = 5, b = 15;
    int apples[] = {-2, 2, 1};
    int oranges[] = {5, -6};
    int n_apples = sizeof(apples) / sizeof(apples[0]);
    int n_oranges = sizeof(oranges) / sizeof(oranges[0]);
    apples_n_oranges(s, t, a, b, apples, n_apples, oranges, n_oranges);
    return 0;
}
