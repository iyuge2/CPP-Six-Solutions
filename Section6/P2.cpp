#include<iostream>
#include<string>
#include<array>

using namespace std;

const int ArSize=10;

int main()
{
    array<double, ArSize> donations;
    int i = 1, bigger_than_mean = 0;
    char tmp;
    double d_sum = 0.0, d_mean = 0.0;

    cout << "Input #" << to_string(i) << ": ";
    while(i <= ArSize && cin >> donations[i]){
        d_sum += donations[i];
        if(++i <= ArSize){
            cout << "Input #" << to_string(i) << ": ";
        }
    }
    d_mean = d_sum / (i - 1);
    
    for(int j = 0; j < i; ++j){
        if(donations[j] > d_mean){
            bigger_than_mean += 1;
        }
    }
    // for(int j = 0; j < i; ++j){
    //     cout << donations[j] << " ";
    // }
    // cout << endl;

    cout << "Mean: " << d_mean << endl;
    cout << "Bigger than Mean: " << bigger_than_mean << endl;

    return 0;
}