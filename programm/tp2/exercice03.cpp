#include<iostream>
using namespace std ; 


int main() {
    // we do **p  >> since it is a pointer point to *int >> ** int *int[1 2 4 5 ]
    // n lines number  
    int n , m , **p , i , j  ;
    cout << " enter n AND m : " << endl ;
    cin >> n >> m ;
    // how many line there will be 
    p = new int*[m] ; // allocation globale 
    for(i = 0 ; i< m ; i++) {
        p[i] = new int[n] ; // allocation locale 
    }
    cout << "  n D array : "<< endl ;
    for (i = 0 ; i< m ; i++) {
        for( j = 0 ; j<n ; j++) {
           cout << "t[" << i << "][" << j <<"] : " <<  endl ;
           cin >> p[i][j] ; 
        }
    }
     for (i = 0 ; i< m ; i++) {
        for( j = 0 ; j<n ; j++) {
           cout << "t[" << i << "][" << j <<"] : " <<  endl ;
           cout << p[i][j] ; 
        }
    }
}