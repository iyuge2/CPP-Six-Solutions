#include<iostream>

using namespace std;

int main()
{
    const int DAY_TO_HOURS = 24;
    const int HOUR_TO_MINUTES = 60;
    const int MINUTE_TO_SECONDS = 60;

    long init_seconds = 0;
    int days = 0, hours = 0, minutes = 0, seconds = 0;

    cout << "Enter the number of seconds: ";
    cin >> init_seconds;

    seconds = init_seconds;

    days = seconds / (DAY_TO_HOURS * HOUR_TO_MINUTES * MINUTE_TO_SECONDS);
    seconds = seconds % (DAY_TO_HOURS * HOUR_TO_MINUTES * MINUTE_TO_SECONDS);

    hours = seconds / (HOUR_TO_MINUTES * MINUTE_TO_SECONDS);
    seconds = seconds % (HOUR_TO_MINUTES * MINUTE_TO_SECONDS);

    minutes = seconds / MINUTE_TO_SECONDS;
    seconds = seconds % MINUTE_TO_SECONDS;

    cout << init_seconds << " seconds = " << days << " days, " \
            << hours << " hours, " << minutes << " minutes, " << seconds << " seconds\n";

    return 0;
}