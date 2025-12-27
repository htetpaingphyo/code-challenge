#include <iostream>
#include <string>

std::string kangaroo(int x1, int v1, int x2, int v2)
{
    // by the problem, x start point, v range
    int a = x1 + v1;
    int b = x2 + v2;
    std::string ans = "NO";

    for (int i = 0; i <= 10000; i++)
    {
        if (a == b)
            ans = "YES";

        a += v1;
        b += v2;
    }

    return ans;
}

int main()
{
    kangaroo(0, 3, 4, 2);
    return 0;
}