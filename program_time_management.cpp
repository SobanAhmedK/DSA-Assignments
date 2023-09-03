#include <iostream>
using namespace std;
int main()
{
    int seconds, hours, days;

    int minutes;
    cin >> minutes;
    hours = minutes / 60;
    days = hours / 24;
    if (hours < 24)

    {
        cout << "Time is : "
             << " hours: " << int(hours) << "  minutes " << int(minutes % 60) << endl;
    }
    else if (hours >= 24 && hours < 48)
    {
        cout << "Time : "  << " day " << days << " hours " << int(hours % 24) << " minutes " << int(minutes % 60) << endl;
    }
    else if (hours > 24)
    {
        cout << "Time is: "
             << " days " << days << " hours " << int(hours % 24) << " minutes " << int(minutes % 60) << endl;
    }
    return 0;
}