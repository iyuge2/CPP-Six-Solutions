#include<iostream>

using namespace std;

int main()
{
    int years = 0;
    int daphne_v = 100, cleo_v = 100;

    for(; cleo_v <= daphne_v; years++){
        cleo_v += cleo_v * 0.05;
        daphne_v += 100 * 0.1;
    }

    cout << "After " << years << " years, the investment of Cleo surpass Daphne. Currently, Cleo is " << \
        cleo_v << "$, and Daphne is " << daphne_v << "$.";

    return 0;
}