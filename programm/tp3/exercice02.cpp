#include<iostream>
using namespace std ;

int power(int , int) ;

int main() {
    int exp , base , powerr;
    cout << "la basse puis exposant : " ; 
    cin >> base >>exp ;
    powerr = power(base , exp);
    cout << "power is : "<< powerr << endl;
}
// power(2 , 4) --> base = 2 , exposant = 4 
// power(2 , 4) = 2 * 2 * 2 * 2 ; 
int power(int base , int exp ) {
  int power =1;
  for (int i=0 ; i<exp ; i++) {
    power *= base ;
  }
  return power ;
}