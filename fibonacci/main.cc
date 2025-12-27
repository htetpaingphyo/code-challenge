#include <iostream>
#include <limits>
#include <string>

void fibonacci(int n)
{
    int next = 0, a = 0, b = 1;
    for (int i = 0; i < n; ++i)
    {
        // add boundary check to prevent overflow
        if (std::numeric_limits<int>::max() - a < b)
        {
            std::cerr << "overflow!" << std::endl;
            return;
        }

        next = a + b;
        b = a;
        a = next;
        std::cout << a << " ";
    }
}

int main(int argc, char *argv[])
{
    int n = argc > 1 ? std::stoi(argv[1]) : 0;
    fibonacci(n);
    std::cout << std::endl;
    return 0;
}
