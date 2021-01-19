#include<iostream>

using namespace std;

int main()
{
    long long global_human = 0, usa_human = 0;
    cout << "Enter the world's population: ";
    cin >> global_human;
    cout << "Enter the population of the US: ";
    cin >> usa_human;

    cout << "The population of the US is " << double(usa_human) / global_human * 100 << "\% of the world population." << endl;

    return 0;
}