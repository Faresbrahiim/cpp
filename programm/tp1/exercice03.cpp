#include<iostream>
using namespace std ;


// we can check the positive value using do while loop ,,, 
//there is no need to check 0 since it wont enter loop
// we have to considered that  the float value wont pass the intrvall [-2pui(32)  2pui(32)-1]
// factoriel in this case wont give the exact value if we give it 13! 
// we can change int  by long int  and long

int main(int argc, char* *argv)
{
    int n, i=1 , f=1 ; 
 do {
     cout << " ecrire le nombre  positive : " ;
     cin >> n ;
 } while (n<0);
 do {
   f=f*i ;
   i=i+1 ;
 }  while (i<=n) ; 
 cout << "le factoriel de " << n << " est   : " << f << endl ;

for (i ;i <=30 ;i++) {
    f=f*i;
}
cout << f << endl ;
return 0 ; 
}
