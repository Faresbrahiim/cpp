#include<iostream>
#include<math.h>
using namespace std ;

void sasir(float & , float & , float & );
void calcul(const float & ,const float & ,const  float & ) ;

int main() {
    float a , b , c;
    sasir(a,b,c) ;
    calcul(a,b,c) ;
    return 0 ;
}

void sasir(float &a , float &b , float &c) {
    cout << "entrer a , b et c " << endl ;
    cin >> a >> b ;
}
void calcul(const float &a , const float &b , const float &c) {
 float delta , x1 , x2 ;
 if (a==0) {
    if (b!=0) {
        cout << "x = " << -c/b << endl;
    } else if (c==0){
      cout << "S=IR" << endl ;
    } else {
      cout << "s = vide " << endl ;
    }
 } else {
    delta = b*b - 4 * a * c;
    if  ( delta < 0) {
       cout << "x1 = " << (-b + sqrt(delta))/(2*a) << endl;
       cout << "x2 = " << (-b - sqrt(delta))/(2*a) << endl;
    } else if (delta == 0) {
       cout << "x = " << -b/(2*a) << endl;
    } else {
        cout << "Pas de solution reel" << endl ;
    }
}
// tour de hanoi