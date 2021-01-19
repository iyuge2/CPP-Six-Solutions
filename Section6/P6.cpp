#include<iostream>
#include<string>

using namespace std;

const int GRAND_PATRONS = 10000;

struct Donator{
    string name;
    double money;
};

int main()
{
    int num = 0;

    cout << "Input the number of donators: ";
    cin >> num;
    cin.get();

    Donator* p = new Donator[num];
    int* gps = new int[num]; // 存储Grand Patrons的编号
    int num_gps = 0; // 存储Grand Patrons的数量
    int* ps = new int[num]; // 存储Patrons的编号
    int num_ps = 0; // 存储Patrons的数量

    // input data
    for(int i = 0; i < num; ++i){
        cout << "#" << to_string(i) << endl;
        cout << "Name: ";
        getline(cin, p[i].name);
        cout << "Money: ";
        cin >> p[i].money;
        cin.get();
        if(p[i].money > GRAND_PATRONS){
            gps[num_gps] = i;
            num_gps++;
        }
        else{
            ps[num_ps] = i;
            num_ps++;
        }
    }

    // 打印输出
    cout << "Grand Patrons." << endl;
    if(num_gps > 0){
        for(int i = 0; i < num_gps; i++){
            cout << "Name: " << p[gps[i]].name << endl;
            cout << "Money: " << p[gps[i]].money << endl;
        }
    }
    else{
        cout << "none" << endl;
    }

    cout << "Patrons." << endl;
    if(num_ps > 0){
        for(int i = 0; i < num_ps; i++){
            cout << "Name: " << p[ps[i]].name << endl;
            cout << "Money: " << p[ps[i]].money << endl;
        }
    }
    else{
        cout << "none" << endl;
    }
    delete []p;
    return 0;
}