#include<iostream>
using namespace std ;
// i This represents the total number of people registered to vote g3  li bghw yntakhbo
// v This represents the total number of people registered to vote li ntakhbo
// Q This is the minimum number of votes required for the election to be considered valid.
int main()
{
    int i , q , v , m ;
    float  p ;
     cout << "ecrire le i q et c en orde : " ;
     cin >> i >> q >> v ;
    if (v >= q){
      m = (v/2)+1 ;
      p = float(v/i) * 100 ;
      cout << "le p est   : " << p ;
      cout << " le m est  : " << m ;
    } else  {
        cout << " v < q !! " ;
    }
    return 0 ;
}
