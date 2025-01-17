#include <iostream>
using namespace std;

int sum(int , int ) ;
void display(int) ;
void display2() ;
// reference >> similar as pointers
int main()  {
    int a , b , s , x;
    cout << "entrer le a et le b  : " ;
    cin >> a  >> b ;
    // fonction pure
    s = sum(a , b) ;
    cout << "la somme "<< s << endl ;
    cout << "entrer le x : " ;
    cin >> x ;
    // prossedure
    display(x) ;
    // prosedure
    display2();
    return 0 ;
}
int sum(int y ,int  x) {
    int s ; 
    s = x + y ;
    return s  ;
}
void diplay(int x) {
    cout <<"votre  entirer est  :  " << x << endl ;
}
void display2() {
    cout << "bonjurno" << endl ;
}