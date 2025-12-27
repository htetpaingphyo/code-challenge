#include <iostream>

void staircase(int n)
{
    char hash = 35;
    for (int i = 0; i < n; ++i)
    {
        for (int j = n; j > i + 1; --j)
            std::cout << " ";
        for (int k = 0; k < i + 1; ++k)
            std::cout << hash;
        std::cout << std::endl;
    }
}

int main()
{
    staircase(50);
    return 0;
}