#include <iostream>
using namespace std;
// cmplexite >> !!!!!!! une machine execute 1000 instruction par second < n=10 000 = 10puiss4
// two for loop o(npuiss2) = (10puiss4)puiss2 = 10 puiss 8 = 10puiss 5 * 10puiss 3 (seconde)
//                                            = 10puiss 5 seconds = 100000= 27 heurs
// one for loop >> 10*10puiss3 ins 10 seconds
// loop imbrique augmente la cmplixite 
int main() {
    int n, t[50], i, x;

    
    do {
        cout << "Enter the dimension : ";
        cin >> n;
    } while (n < 0 || n > 50) ;

    for (i = 0; i < n; i++) {
        cout << "t[" << i << "]: ";
        cin >> t[i];
    }

    
    cout << "le premier tab:" << endl;
    for (i = 0; i < n; i++) {
        cout << "t[" << i << "] : " << t[i] << endl;
    }

    
    cout << "Enter the value of x to remove: ";
    cin >> x;
   i= 0 ; 

   while (i<=n) {
        if (t[i] == x) {
            for (int j = i; j < n - 1; j++) {
                t[j] = t[j + 1]; 
            }
            n--; 
         
        } else {
            i++; 
        }
    }
//complexité 
    cout << "Final array:" << endl;
    for (i = 0; i < n; i++) {
        cout << t[i] << "\t";
    }
    cout << endl;

    return 0;
}



#include<iostream>

using namespace std ;

int main() {
    int t[50] , n , x , i=0 ;
    do {
        cout << "value of n " << endl ;
        cin >> n ;
    } while (n <0 || n>=50)
    for (i ;  i<n ; i++) {
        cin >> t[i];
    }
    int j = 0 ; // new indexs
     for (i ;  i<n ; i++) {
        if (t[i]!=x) {
           t[j] = t[i];
           j++
        } 
    }
     n=j ;
     for (i ; i<n ; i++) {
         cout << t[i] << endl ;
     }
}

// another solution 
/*j=0
for (i=0 l i<n ;i++) {
if (t[i]!=x) {
t[j]=t[i]
j++
}
n=j
}
*/