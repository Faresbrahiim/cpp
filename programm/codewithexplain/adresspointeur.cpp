#include<iostream>
using namespace std ;

// *p >> is a pointer == the value where it point the pointer  ( valeur  fen kaypwanti l pointeur )
// p >> adrees where the pointer point  (p == adres fen ghadi ypwanti pointeur )
// declaration ==> *p   ,, remplisage *p = 
// gives adress to pointer >> p = &a ; a is normale variable 
// steps :::: declaration du pointeur 
// give it adress
// remplir le pointeur
int main(int argc, char* *argv) {
 int a  , b ; 
 int *p ;
 a=5; 
 p = &a ;  
 cout << "a = " << a << endl ; 
 cout << "adress de a est  :  "<< &a << endl;
 cout <<  "*p = " << *p << endl ;
 cout << " adress = " << p << endl ;

 *p  = *p + 2 ;
 
 cout << "a = " << a << endl ; 
 cout << "adress de a est  :  "<< &a << endl;
 cout <<  "*p = " << *p << endl ;
 cout << " adress = " << p << endl ;

 b = 17 ; 
 p = &b; 

 cout <<  "*p = " << *p << endl ;
 cout << " adress = " << p << endl ;

 (*p)++ ;
 
 cout <<  "*p = " << *p << endl ;
 cout << " adress = " << p << endl ;
 return 0 ;
}