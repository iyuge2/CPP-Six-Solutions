#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fp;
    char ch;
    int counts = 0;

    fp.open("P8.txt");
    
    fp >> ch;
    while(fp.good()){
        // cout << ch;
        fp >> ch;
        counts += 1;
    }

    cout << counts << endl;
    fp.close();
    return 0;
}