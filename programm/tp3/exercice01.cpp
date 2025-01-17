#include<iostream>
using namespace std ;


void LIRE_TAB(int* ,const int& ) ;
void ECRIRE_TAB(int* ,const int& ) ;
int SOMME_TAB(int* ,const int& ) ;
int MIN_TAB(int* , const int& );
int* ADRESS_MAX(int* , const int&) ;

int main() {
  int *t , n , sum  , *q ;
  cout << "enter la taille du tableaau " << endl ;
  cin >> n ;
  t = new int[n] ;
  LIRE_TAB(t,n);
  ECRIRE_TAB(t,n);
  sum =  SOMME_TAB(t,n) ;
  cout << "la somme est = "<< sum << endl ;
  cout << "la minimun est = "<< MIN_TAB(t,n) << endl ;
  q = ADRESS_MAX(t,n) ;
  cout << "valeur max =" << *q << endl ;
  cout << "adress max =" << q << endl ;
  cout << "position max =" << q-t << endl ;


}


void LIRE_TAB(int *t , const int &n) {
  cout << "saisie du tableau : "<< endl ;
  for (int i=0 ; i<n ; i++) {
    cout  <<"entrer t [" << i << "]  " << endl ;
    cin >> t[i];  
 }
}
void ECRIRE_TAB(int *t , const int &n) {
  cout << "Affichage du tableau : "<< endl ;
  for (int i=0 ; i<n ; i++) {
    cout  <<"entrer t [" << t[i] << "]"  << "\t" ;
 }
}
int SOMME_TAB(int *t , const int &n) {
  int s=0 ;
  for (int i=0 ; i<n ; i++) {
   s += t[i];
 }
 return s ;
}
int MIN_TAB(int *t , const int &n) {
  int min=t[0] ;
  for (int i=1 ; i<n ; i++) {
    if (t[i]<min) {
        min =t[i];
    }
 }
 return min ;
}
//  ba9ii mafhmtha 
int* ADRESS_MAX(int *t , const int &n) {
    int *p =t ;
    for(int i = 1 ;  i<n ; i++ ) {
        if (t[i]> *p) {
            p= p+i ; 
        }
    }
    return p ; 
}


