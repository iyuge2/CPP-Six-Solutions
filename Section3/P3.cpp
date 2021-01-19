#include<iostream>

using namespace std;

int main()
{
    const int D_TO_M = 60;
    const int M_TO_S = 60;

    int degree = 0, minute = 0, second = 0;
    float latitude = 0.0;

    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;

    latitude = degree + float(minute) / D_TO_M + float(second) / (D_TO_M * M_TO_S);

    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << latitude << " degrees\n";

    return 0;
}