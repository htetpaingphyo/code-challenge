#include <iostream>
#include <set>
#include <map>

std::string findstr(std::string s, int k)
{
    std::set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::map<std::string, int> subStrCount;
    std::string result = "Not found!";

    if (s.size() < k)
    {
        return result;
    }

    for (int i = 0; i < s.size() - k; ++i)
    {
        std::string temp = s.substr(i, k);
        int count = 0;

        for (char c : temp)
        {
            if (vowels.count(c) > 0)
            {
                count++;
            }
        }
        subStrCount[temp] = count;
    }

    int vCount = 0;
    for (const auto &[str, count] : subStrCount)
    {
        if (count > vCount || (count == vCount && str < result))
        {
            vCount = count;
            result = str;
        }
    }

    return result;
}

int main()
{
    std::string s;
    int k = 0;

    std::cout << "enter letter sequence: ";
    getline(std::cin, s);

    std::cout << "enter delimiter: ";
    std::cin >> k;

    std::cout << findstr(s, k) << std::endl;

    return 0;
}