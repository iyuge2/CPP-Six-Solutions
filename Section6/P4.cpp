#include<iostream>

using namespace std;

const int strsize = 15;

struct bop{
    char fullanme[strsize]; // real name
    char title[strsize];  // job title
    char bopname[strsize]; // secret BOP name
    int preference; // 0: fullname, 1: title, 2: bopname
};

int main()
{
    const int N_MAN = 3;
    bop man[N_MAN] = {
        {"Wimp Macho", "t1", "b1", 0},
        {"Raki Rhodes", "t2", "b2", 1},
        {"Celia Laiter", "t3", "b3", 2}
    };
    char op;

    cout << "Benevolent order of programmers report: " << endl;
    cout << "a) display by name" << endl;
    cout << "b) display by title" << endl;
    cout << "c) display by bopname" << endl;
    cout << "d) display by preference" << endl;
    cout << "q) quit" << endl;

    do{
        cout << "Enter your choice: ";
        cin >> op;
        switch(op){
            case 'a':
                for(int i = 0; i < N_MAN; ++i){
                    cout << man[i].fullanme << endl;
                }
                break;
            case 'b':
                for(int i = 0; i < N_MAN; ++i){
                    cout << man[i].title << endl;
                }
                break;
            case 'c':
                for(int i = 0; i < N_MAN; ++i){
                    cout << man[i].bopname << endl;
                }
                break;
            case 'd':
                for(int i = 0; i < N_MAN; ++i){
                    switch(man[i].preference){
                        case 0: cout << man[i].fullanme << endl; break;
                        case 1: cout << man[i].title << endl; break;
                        case 2: cout << man[i].bopname << endl; break;
                    }
                }
                break;
            default: break;
        }
    }while(op != 'q');

    return 0;
}