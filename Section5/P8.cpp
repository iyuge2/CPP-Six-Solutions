#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    const int MAX_WORD_LEN = 20;
    char p[MAX_WORD_LEN];
    int count = 0;

    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> p;
    while(strcmp(p, "done")){
        count += 1;
        cin >> p;
    }

    cout << "You entered a total of " << count << " words." << endl;
    return 0;
}