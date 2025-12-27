#include <iostream>
#include <vector>

std::vector<int> breakingRecords(std::vector<int> scores)
{
    std::vector<int> result;
    int min = 0, max = 0;
    int highestScore = scores[0];
    int lowwestScore = scores[0];

    for (int i : scores)
    {
        if (i > highestScore)
        {
            highestScore = i;
            ++max;
        }
        if (i < lowwestScore)
        {
            lowwestScore = i;
            ++min;
        }
    }

    result.push_back(max);
    result.push_back(min);
    return result;
}

int main()
{
    std::vector<int> scores = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};
    std::vector<int> result = breakingRecords(scores);
    printf("%d %d", result[0], result[1]);
    return 0;
}