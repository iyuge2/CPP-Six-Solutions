#include<iostream>
#include<string>

using namespace std;

struct PizzaCake{
    string company;
    float diameter;
    float weight;
};

int main()
{
    PizzaCake cake1;

    cout << "Enter company name: ";
    getline(cin, cake1.company);
    cout << "Enter the diameter of pizza cake: ";
    cin >> cake1.diameter;
    cout << "Enter the weight of pizza cake: ";
    cin >> cake1.weight;
    cout << "The basic information of this pizza cake is " << cake1.company << " " << cake1.diameter << " " << cake1.weight << endl;

    return 0;
}