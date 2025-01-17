#include<iostream>
using namespace  std ;

int sum(const int &) ;

int main() {
    int s , n ;
    do {
    cout << "entrer le nombres : " ;
    cin >> n ;
    } while (n<0) ;
    s = sum(n);
    cout << "sum is " << s << endl ;
}

int sum(const int &n ) {
    if (n == 0 ) {
        return 0 ;
    } 
    return sum(n-1)+ n  ;
}