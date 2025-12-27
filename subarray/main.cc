#include <iostream>
#include <vector>

int subArrayDivision(std::vector<int> s, int d, int m)
{
    int count = 0;

    if (m > s.size())
        return 0;

    for (int i = 0; i <= s.size() - m; ++i)
    {
        int sum = 0;

        for (int j = 0; j < m; ++j)
        {
            sum += s[i + j];
        }

        if (sum == d)
        {
            ++count;
        }
    }

    return count;
}

int main()
{
    int d = 3, m = 2;
    std::vector<int> s = {1, 1, 1, 1, 1, 1};
    std::cout << subArrayDivision(s, d, m) << std::endl;
    return 0;
}