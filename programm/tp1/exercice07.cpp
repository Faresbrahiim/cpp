#include<iostream>
using namespace std ;

int main(int argc, char* *argv) {

  int  somme , sous ,  pro , div  , x , y ; 
  char oprrateur ; 
  cout << "ecrire la valeur de a  : " ;
  cin >> x ;

  cout << "ecrire la valeur de b  : " ;
  cin >> y ;
  cout << "ecrire  l operatuer : " ;
  cin >> oprrateur ;
  
  switch (oprrateur) {
    case '+' :  cout << "la sommee est  :  " << x+y << endl;
    break;
    case '-' :  cout << "la  soustraction est  :  " << x-y << endl;
    break;
    case '*' :  cout << "le produit  est  :  " << x*y << endl;
    break ;
     case '/' :  if (y != 0 ){
                 cout << "le produit  est  :  " << x/y << endl;
                } else  {
                    cout << "imposible "  << endl;
              }
    break ;
     default:  cout << " operation est n'est pas valid "  << endl;
    break;
  }

}