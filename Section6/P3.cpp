#include<iostream>

using namespace std;

int main()
{
    char op;

    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnivore" << endl;
    cout << "p) pianist" << endl;
    cout << "t) tree" << endl;
    cout << "g) game" << endl;
    cout << "k) exit" << endl;

    cin >> op;
    while(op != 'k'){
        switch(op){
            case 'c': cout << "carnivore" << endl; break;
            case 'p': cout << "pianist" << endl; break;
            case 't': cout << "tree" << endl; break;
            case 'g': cout << "game" << endl; break;
            default: break;
        }
        cout << "Please enter c, p, t, g, k: ";
        cin >> op;
    }
    return 0;
}