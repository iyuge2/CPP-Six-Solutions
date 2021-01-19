#include<iostream>

using namespace std;

struct CandyBar{
    char band[20];
    float weight;
    int calories;
};

int main()
{
    CandyBar* snack = new CandyBar[3]; 
    for(int i = 0; i < 3; i++){
        strcpy(snack[i].band, "Mocha Munch");
        snack[i].weight = 2.3;
        snack[i].calories = 350;
    }

    for(int i = 0; i < 3; i++){
        cout << snack[i].band << " ";
        cout << snack[i].weight << " ";
        cout << snack[i].calories << " ";
        cout << endl;
    }

    delete [] snack;
    return 0;
}