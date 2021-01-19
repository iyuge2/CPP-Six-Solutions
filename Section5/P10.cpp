#include<iostream>

using namespace std;

int main()
{
    int n_row = 0;
    cout << "Enter number of rows: ";
    cin >> n_row;
    for(int i = 0; i < n_row; ++i){
        for(int j = 0; j < n_row-i-1; ++j){
            cout << ".";
        }
        for(int j = 0; j < i+1; ++j){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}