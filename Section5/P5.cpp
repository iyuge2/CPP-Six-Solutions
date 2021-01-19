#include<iostream>
#include<string>

using namespace std;

int main()
{
    const int MONTHS = 12;
    string tips[MONTHS];
    int sales[MONTHS];
    int year_sale = 0;

    for(int i = 0; i < MONTHS; i++){
        tips[i] = "Please input the " + to_string(i+1) + "th month: ";
    }

    for(int i = 0; i < MONTHS; i++){
        cout << tips[i];
        cin >> sales[i];
    }
    
    for(int i = 0; i < MONTHS; i++){
        year_sale += sales[i];
    }

    cout << "The summarization of sales in this year is " << year_sale << endl;

    return 0;
}