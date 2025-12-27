#include <iostream>

int main()
{
    int num, *arr;
    std::cout << "enter number of array: ";
    std::cin >> num;

    arr = (int *)malloc(num * sizeof(int));
    for (int i = 0; i < num; ++i)
    {
        arr[i] = i + 1;
        std::cout << arr[i] << " ";
    }

    // reverse array
    for (int i = 0; i < num / 2; ++i)
    {
        int temp = arr[i];
        arr[i] = arr[num - i - 1];
        arr[num - i - 1] = temp;
    }

    std::cout << std::endl;

    for (int i = 0; i < num; i++)
        std::cout << arr[i] << " ";
}