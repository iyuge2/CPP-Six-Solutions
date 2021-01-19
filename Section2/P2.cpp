#include<iostream>

using namespace std;

int main()
{
    int dist;
    cout << "请输入一个以long为单位的距离：";
    cin >> dist;
    cout << "该距离的码数为：" << dist * 220 << endl;
    return 0;
}