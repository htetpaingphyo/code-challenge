#include <iostream>
#include <vector>

std::vector<int> compareTriplets(std::vector<int> a, std::vector<int> b)
{
    std::vector<int> result;
    int alicePoint = 0;
    int bobPoint = 0;

    for (int i = 0; i < 3; ++i)
    {
        if (a[i] != 100 && b[i] != 100)
        {
            if (a[i] > b[i])
                ++alicePoint;
            else if (b[i] > a[i])
                ++bobPoint;
            else
                continue;
        }
    }

    result.push_back(alicePoint);
    result.push_back(bobPoint);
    return result;
}

int main()
{
    std::vector<int> a = {5, 6, 7};
    std::vector<int> b = {3, 6, 10};
    std::vector<int> result = compareTriplets(a, b);
    for (int i = 0; i < result.size(); i++)
    {
        if (i > 0)
            printf(", ");

        printf("%d", result[i]);
    }
}