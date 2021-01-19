#include<iostream>

using namespace std;

struct CandyBar{
    char band[20];
    float weight;
    int calories;
};

int main()
{
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << snack.band << endl;
    cout << snack.weight << endl;
    cout << snack.calories << endl;

    return 0;
}