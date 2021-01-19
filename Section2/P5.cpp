#include<iostream>

float cel_to_fah(float cel)
{
    return cel * 1.8 + 32.0;
}

int main()
{
    using namespace std;

    float celsius;
    cout << "Please enter a celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << cel_to_fah(celsius) << " degrees Fahrenheit.\n";
    return 0;
}