#include <iostream>
#include <string>

std::string timeConversion(std::string s)
{
    std::string hour = s.substr(0, 2);
    std::string minute = s.substr(3, 2);
    std::string second = s.substr(6, 2);
    std::string flag = s.substr(8, 2);

    if (flag == "AM")
    {
        int iHour = std::stoi(hour);
        if (iHour == 12)
            hour = "00";
    }
    else
    {
        int iHour = std::stoi(hour);
        if (iHour != 12)
            iHour += 12;
        hour = std::to_string(iHour);
    }

    return hour + ":" + minute + ":" + second;
}

int main()
{
    std::string s = "08:01:00PM";
    std::string result = timeConversion(s);
    std::cout << result << std::endl;
    return 0;
}