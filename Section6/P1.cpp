#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    char ch;
    cin.get(ch);
    while(ch != '@'){
        if(isalpha(ch)){
            if(islower(ch))
                ch = toupper(ch);
            else
                ch = tolower(ch);
        }
        if(!isdigit(ch)){
            cout << ch;
        }
        cin.get(ch);
    }
    return 0;
}