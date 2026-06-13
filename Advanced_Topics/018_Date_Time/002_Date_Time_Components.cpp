#pragma warning(disable : 4996)

#include <iostream>
#include <ctime>
using namespace std;

// tm Structure Reference:
// tm_sec   -> Seconds after the minute [0 - 60]
// tm_min   -> Minutes after the hour [0 - 59]
// tm_hour  -> Hours since midnight [0 - 23]
// tm_mday  -> Day of the month [1 - 31]
// tm_mon   -> Months since January [0 - 11]
// tm_year  -> Years since 1900
// tm_wday  -> Days since Sunday [0 - 6]
// tm_yday  -> Days since January 1 [0 - 365]
// tm_isdst -> Daylight Saving Time flag

int main()
{
    // Get current system time
    time_t currentTime = time(nullptr);

    // Convert system time to local time structure
    tm* localTime = localtime(&currentTime);

    // Display date components
    cout << "Year      : " << localTime->tm_year + 1900 << endl;
    cout << "Month     : " << localTime->tm_mon + 1 << endl;
    cout << "Day       : " << localTime->tm_mday << endl;

    cout << endl;

    // Display time components
    cout << "Hour      : " << localTime->tm_hour << endl;
    cout << "Minute    : " << localTime->tm_min << endl;
    cout << "Second    : " << localTime->tm_sec << endl;

    cout << endl;

    // Display calendar information
    cout << "Week Day  : " << localTime->tm_wday << endl;
    cout << "Year Day  : " << localTime->tm_yday << endl;

    cout << endl;

    // Display daylight saving time status
    cout << "DST Flag  : " << localTime->tm_isdst << endl;

    return 0;
}