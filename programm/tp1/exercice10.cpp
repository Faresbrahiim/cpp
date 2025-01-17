#include<iostream>
using namespace std ;

int main()
{
    int t[50] , N , i , Pmax ;
    cout << "enterr le n " << endl ;
    cin >> N;
    cout << "saisie les element du tableaux " << endl ;
    for (i=0 ; i<N ; i++) {
        cout << "enter t[" << i << "]" << endl ;
        cin  >> t[i];
    }
    cout << "affichage du tableau "<< endl ;
    for (i=0 ; i<N ;i++) {
        cout << t[i] << "\t";
    }
    Pmax = 0 ; 
    for (i=1 ; i<N ; i++) {
        if (t[i] > t[Pmax]) {
            Pmax = i;
        }
    }
    cout << "la valeur  du max est : " << t[Pmax] << endl ;
    cout << "posistion de max est  : " << Pmax <<  endl ;
    return 0 ;

}