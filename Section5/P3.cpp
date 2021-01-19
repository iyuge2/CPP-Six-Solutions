#include<iostream>

using namespace std;

int main()
{
    int cur_res = 0;
    int cur_input = 0;

    while(1){
        cout << "Enter an integer (end with 0): ";
        cin >> cur_input;
        if(cur_input == 0){
            break;
        }
        cur_res += cur_input;
        cout << "Current summarization: " << cur_res << endl;
    }
    return 0;
}