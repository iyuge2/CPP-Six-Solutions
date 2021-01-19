#include<iostream>
#include<array>

using namespace std;

int main()
{
    array<float, 3> grades;
    cin >> grades[0] >> grades[1] >> grades[2];
    cout << grades[0] << endl;
    cout << grades[1] << endl;
    cout << grades[2] << endl;

    return 0;
}