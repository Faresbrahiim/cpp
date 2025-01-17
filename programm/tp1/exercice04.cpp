#include<iostream>
#include<iomanip>
using namespace std ;

int main(int argc, char* *argv)
{
 int  iterationNumber , i ;
 float u  = 1; 
 cout << "entre le nombre des iterations : " ;
 cin >> iterationNumber ;
  for (i=1; i <= iterationNumber; i++) {
   u = (u+2/u)/2 ;
   cout << "le resulat est : " << setprecision(50) << endl ;
  }
}
