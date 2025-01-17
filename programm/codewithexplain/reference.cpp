#include <iostream>
using namespace std;
// refernce n'occupe pas  un espace memoire par contre les pointeurs 
// but refernce used only to manage and not allocate 
//zamel arrabat
int main() {
    int a = 5 ;
    int &reference =  a  ;
    cout << "a = " << a << endl ;
    cout << "reference = " << reference << endl ;
    
    cout << "adress du a " << &a << endl ;
    cout << "adreess du reference " << &reference << endl ;
    reference++ ;
    cout << "a = " << a << endl ;
    cout << "reference = " << reference << endl ;
    cout << "adress du a " << &a << endl ;
    cout << "adreess du reference " << &reference << endl ;
    return 0 ;
}