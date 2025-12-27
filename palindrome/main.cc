#include <iostream>
#include <string>

bool isPalindrome(std::string s)
{
    std::string filter = "";

    for (char c : s)
    {
        if (isalnum(c))
            filter += tolower(c);
    }

    int start = 0, end = filter.length() - 1;
    while (start < end)
    {
        if (filter[start] != filter[end])
            return false;

        start++;
        end--;
    }

    return true;
}

int main()
{
    std::string str;
    std::cout << "enter string: ";
    getline(std::cin, str);
    printf("%s\n", isPalindrome(str) ? "YES" : "NO");
    return 0;
}