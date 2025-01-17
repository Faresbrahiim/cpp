#include<iostream>
using namespace std;

int main() {
    int t[50], n , i , tp[50],tn[50];
    do {
        cout << "Enter the number of elements: ";
    cin >> n;
    } while (n>50 || n<=0) ;
    
    
    for ( i = 0; i < n; i++) {
        cout << "t[" << i + 1 << "] = ";  
        cin >> t[i];
    }
    for ( i = 0; i < n; i++) {
        cout << "t[" << i << "] = " << t[i] << endl; 
    }
    int j =n -1 ,temp;
    for (i=0 ; i<j; i++) {
     temp = t[i] ;
     t[i]=t[j];
     t[j]=temp;
     j--;
    }
   cout << " this is the reversed one \n\n"<< endl; 
    for ( i = 0; i < n; i++) {
        cout << "t[" << i << "] = " << t[i] << endl; 
    }
     int j=0 , k=0 ; 
    for (i=0 ; i<n ; i++ ) {
      if (t[i] >= 0 ){
       tp[j++]=t[i] ;
      } else {
       tn[k++]=t[i] ;
      }
    cout << "\nPositive numbers (TPOS): ";
    for (i = 0; i < j; i++) {
        cout << tp[j] << " ";
    }
    cout << endl;

    // Display negative numbers (TNEG)
    cout << "Negative numbers (TNEG): ";
    for (i = 0; i < k; i++) {
        cout << tn[k] << " ";
    }
    cout << endl;
    }
    return 0;
}
