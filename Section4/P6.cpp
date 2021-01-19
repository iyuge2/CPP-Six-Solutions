#include<iostream>

using namespace std;

struct CandyBar{
    char band[20];
    float weight;
    int calories;
};

int main()
{
    CandyBar snack[3] = {{"Mocha Munch", 2.3, 350}, {"Mocha Munch", 2.3, 350}, {"Mocha Munch", 2.3, 350}};

    for(int i = 0; i < 3; i++){
        cout << snack[i].band << " ";
        cout << snack[i].weight << " ";
        cout << snack[i].calories << " ";
        cout << endl;
    }
    return 0;
}