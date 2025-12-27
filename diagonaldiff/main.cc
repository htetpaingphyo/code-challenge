#include <iostream>
#include <vector>

int diagonalDifference(std::vector<std::vector<int>> arr)
{
    int size = arr.size();
    int firstDiagonal = 0;
    int secondDiagonal = 0;

    for (int i = 0; i < size; ++i)
    {
        firstDiagonal += arr[i][i];             // algorithm for first diagonal
        secondDiagonal += arr[i][size - 1 - i]; // algorithm for second diagonal
    }

    return abs(firstDiagonal - secondDiagonal);
}

int main()
{
    std::vector<std::vector<int>> matrix = {{11, 2, 4},
                                            {4, 5, 6},
                                            {10, 8, -12}};
    int result = diagonalDifference(matrix);
    std::cout << result << std::endl;

    return 0;
}