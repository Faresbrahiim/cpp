#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

 int  n,v,s=0 ,i ,p=1;
  float m ;
 
   cout << "ecrire le nombre de rep : " << endl ;
   cin >> n ;
   for (i=0; i<=n ; i++) {
        cout << "ecrire le nombre : " << endl ; 
        cin >> v ;
        s += v ;
        p=p*v;
   }
   m=s/p ;
  cout << "la somme est  :" << s << endl ;
  cout << "le produit est  :" << p << endl ;
  cout << "la somme est  :" << m << endl ;

}