#include<iostream>

using namespace std;

int main()
{
    int i1, i2;
    int res = 0;

    cin >> i1 >> i2;

    for(int i = i1; i <= i2; i++){
        res += i;
    }

    cout << res;

    return 0;
}