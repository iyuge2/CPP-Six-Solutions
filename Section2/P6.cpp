#include<iostream>

float clac_units(float ly)
{
    return 63240 * ly;
}

int main()
{
    using namespace std;

    float light_year;
    cout << "Enter the number of light years: ";
    cin >> light_year;
    cout << light_year << " light years = " << clac_units(light_year) << " astronomical units.\n";
    return 0;
}