#include<iostream>

using namespace std;

int main()
{
    const float GALLON_TO_LIQUIDS = 3.785;
    const float KM_TO_MILES = 62.14;

    float gas_liquids = 0.0;

    cin >> gas_liquids;
    cout << KM_TO_MILES / (gas_liquids / GALLON_TO_LIQUIDS) << endl;

    return 0;
}