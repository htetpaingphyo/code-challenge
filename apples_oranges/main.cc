#include <iostream>
#include <vector>

void countApplesAndOranges(int s, int t, int a, int b, std::vector<int> apples, std::vector<int> oranges)
{
    /*  ------x----#--x--x---/|||\---x----#---xx-------  */
    /*  assume that x are fruits # are trees and /|||\ is house  */

    int acount = 0, ocount = 0;

    if (a > s || s > t || t > b)
        return;

    for (int i : apples)
    {
        int boundary = a + i;
        if (boundary >= s && boundary <= t)
        {
            acount++;
        }
    }

    for (int i : oranges)
    {
        int boundary = b + i;
        if (boundary >= s && boundary <= t)
        {
            ocount++;
        }
    }

    std::cout << acount << std::endl;
    std::cout << ocount << std::endl;
}

int main()
{
    int s = 7, t = 11, a = 5, b = 15;
    std::vector<int> apples, oranges;
    apples = {-2, 2, 1};
    oranges = {5, -6};
    countApplesAndOranges(s, t, a, b, apples, oranges);
    return 0;
}