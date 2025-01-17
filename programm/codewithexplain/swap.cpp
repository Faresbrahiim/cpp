#include <iostream>
using namespace std;
// passage par valeur --> perte de la memoire  + perte du temp
// passage par addresse --> &a ,&b et *a , *b
// passage par reference --> diminution de risque 
// passage par reference constante --> ne change pas de valeur 
// allocation dynamic (pointeurs obligatoire)
void Swap(int& ,int&) ;

int main() {
    int a , b , result ;
    cout << " the value of a   : " << endl ;
    cin >> a  ;
    cout << " the value of b   : " << endl ;
    cin >> b  ;
    cout << " the value of a   : " << a <<endl ;
    cout << " the value of b   : " <<b <<endl ;
    Swap(a ,b );
    cout << " the value of a   : " << a <<endl ;
    cout << " the value of b   : " << b <<endl ;
}

void Swap(int &a , int &b ) {
    int  c ;
    c= a ; 
    a = b ;
    b = c;  
}