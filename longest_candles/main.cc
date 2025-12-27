#include <iostream>
#include <vector>

int birthdayCakeCandles(std::vector<int> candles)
{
    int max = -1;
    int count = 0;

    for (int i = 0; i < candles.size(); ++i)
    {
        if (candles[i] > max)
            max = candles[i];
    }

    for (int i : candles)
    {
        if (i == max)
            ++count;
    }

    return count;
}

int main()
{
    std::vector<int> arr = {9, 2, 14, 7, 11, 14, 3, 5, 8};
    int result = birthdayCakeCandles(arr);
    std::cout << result << std::endl;
    return 0;
}