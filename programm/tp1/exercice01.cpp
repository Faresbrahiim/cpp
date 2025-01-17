#include<iostream>
using namespace std ;

// take the decimal value of 'a' and 'z' >> wich is 67 ,, 
int main()
{
  char x ,y ;
  cout << "la valuer du character a verifer ? : " ;
  cin >> x  ;
  if (x >= 'A' && x<='Z') {
    y= x + 'a' - 'A' ;
    cout << "le caracteere en muniscule est : " << y << endl;
  } else {
    cout << "error" ;
  }
  return 0 ;
}
