#include<iostream>
#include<string>

using namespace std;

int main()
{
    double income, tax;
    cout << "Enter your income: ";
    while(cin >> income && income > 0){
        if(income < 5000)
            tax = 0;
        else if (income < 15000)
            tax = (income - 5000) * 0.1;
        else if (income < 35000)
            tax = (income - 15000) * 0.15 + 10000 * 0.1;
        else
            tax = (income - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
        cout << "Tax: " << tax << endl;
        cout << "Enter your income: ";
    }
    return 0;
}