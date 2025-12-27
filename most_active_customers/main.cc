#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<std::string> mostActive(std::vector<std::string> customers)
{
    std::unordered_map<std::string, int> customerCount;
    std::vector<std::string> activeCustomers;
    int total = customers.size();

    for (const auto &customer : customers)
    {
        customerCount[customer]++;
    }

    for (const auto &[customer, count] : customerCount)
    {
        if (static_cast<float>(count) / total * 100 >= 5)
        {
            activeCustomers.push_back(customer);
        }
    }

    return activeCustomers;
}

int main()
{
    int num = 0;
    std::string name;
    std::vector<std::string> result;

    std::cout << "enter number of customers: ";
    std::cin >> num;

    std::vector<std::string> customers(num);
    for (int i = 0; i < num; ++i)
    {
        std::getline(std::cin, name);
        customers.push_back(name);
    }

    result = mostActive(customers);
    for (std::string customer : result)
    {
        std::cout << customer << std::endl;
    }

    return 0;
}