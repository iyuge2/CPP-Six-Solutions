#include<iostream>
#include<string>

using namespace std;

int main()
{
    string tmp;
    int num_vowels = 0, consonants = 0, others = 0;
    cout << "Enter words (q to quit):" << endl;
    while(cin >> tmp and tmp != "q"){
        if(isalpha(tmp[0])){
            switch(tmp[0]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u': num_vowels += 1; break;
                default: consonants += 1; break;
            }
        }else{
            others += 1;
        }
    }

    cout << to_string(num_vowels) << " words begining with vowels." << endl;
    cout << to_string(consonants) << " words begining with consonants." << endl;
    cout << to_string(others) << " others." << endl;
    return 0;
}