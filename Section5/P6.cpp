#include<iostream>

using namespace std;

int main()
{
    const int YEARS = 3;
    const int MONTHS = 12;
    int sales[YEARS][MONTHS];
    int all_sale = 0;

    for(int i = 0; i < YEARS; i++){
        for(int j = 0; j < MONTHS; j++){
            cout << "Please input the sale of the " + to_string(j+1) + "th month in " + to_string(i+1) + "th year: ";
            cin >> sales[i][j];
        }
    }

    for(int i = 0; i < YEARS; i++){
        int year_sale = 0;
        for(int j = 0; j < MONTHS; j++){
            year_sale += sales[i][j];
        }
        cout << "The summarization of sales in this year is " << year_sale << endl;
        all_sale += year_sale;
    }
    cout << "The summarization of sales in three year is " << all_sale << endl;
    return 0;
}