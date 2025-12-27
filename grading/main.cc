#include <iostream>
#include <vector>

std::vector<int> gradingStudents(std::vector<int> grades)
{
    std::vector<int> roundGrades;

    for (int i : grades)
    {
        int q = i / 5 + 1;
        if (q * 5 - i < 3)
        {
            if (q * 5 >= 40)
                i = q * 5;
        }
        roundGrades.push_back(i);
    }

    return roundGrades;
}

int main()
{
    std::vector<int> grades = {73, 67, 38, 33};
    std::vector<int> result = gradingStudents(grades);
    for (int i : result)
        std::cout << i << " ";
    return 0;
}
