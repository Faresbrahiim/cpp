#include <iostream>

using namespace std;
// *p >> is a pointer == the value where it point the pointer  ( valeur  fen kaypwanti l pointeur )
// p >> adrees where the pointer point  (p == adres fen ghadi ypwanti pointeur )
// declaration ==> *p   ,, remplisage *p = 
// gives adress to pointer >> p = &a ; a is normale variable 
// steps :::: declaration du pointeur 
// give it adress
// remplir le pointeur

// tableau dynamic 
//  il faut pas utiliser les indices ,,, on faut utiliser les adresss ,,,, 
// quand declare un tableau dynamic  ,,, t prendre adress du premier case 
// on declare un dexieme pointeur qui joue le role de i >> p
// t=p >> initialisation ,, p < t+n > condition ,, >> p++ pour aller au adress suivant
// p-t ,, c'est indice de du tableau et /*p c'est la valeur 
    
int main(int argc, char* argv[]) {
   
   int *t , n  , i ; 
   cout << "entrer n : " << endl ;
   cin >> n ; 
   t = new int[n] ; // allocation   dynamic
   cout << "sasir du tableau " << endl ;

   for (i=0 ; i < n ; i++) {
    cout << "enter t [i]" << endl ;
    cin >> t[i] ;
   }
   cout << "affichage du tableau " << endl ;
   for (i=0 ; i < n ; i++) {
         cout << t[i] << "\t";
   }
   delete []t;
   return 0 ;

}