/*
* 1英尺 = 12英寸
* 1英尺 = 30.48厘米
* 1英寸 = 2.54厘米
*/

#include<iostream>

using namespace std;

int main()
{
    const int FOOT_TO_INCH = 12;
    int inch=0;
    cout << "Please input your height (inch): ";
    cin >> inch;
    cout << "your height = " << inch / FOOT_TO_INCH << " foots, " << inch % FOOT_TO_INCH << " inches." << endl;
    return 0;
}