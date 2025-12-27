#include <iostream>

int main()
{
    int n;
    std::cout << "enter number: ";
    std::cin >> n;

    int size = 2 * n - 1;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            int x = i < j ? i : j;

            x = x < size - i ? x : size - i - 1;
            x = x < size - j ? x : size - j - 1;

            printf("%d ", n - x);
        }
        std::cout << std::endl;
    }

    return 0;
}