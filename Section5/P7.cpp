#include<iostream>
#include<string>

using namespace std;

struct Car{
    string manufacturer;
    int year;
};

int main()
{
    int counts = 0;
    cout << "Enter the number of cars: ";
    cin >> counts;
    cin.get(); // 吸收换行符

    Car* pt = new Car[counts];
    for(int i = 0; i < counts; ++i){
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, pt[i].manufacturer);
        cout << "Please enter the year made: ";
        cin >> pt[i].year;
        cin.get(); // 吸收换行符
    }

    cout << "Here is the collection:" << endl;
    for(int i = 0; i < counts; ++i){
        cout << pt[i].year << " " << pt[i].manufacturer << endl;
    }
    return 0;
}