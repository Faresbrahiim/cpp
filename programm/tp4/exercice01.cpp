#include<iostream>
#include<string>
using namespace std;

// int main() {
//     int c =0 ;
//     char text[100] ;
//     cout << "entrer votre text" << endl ;
//     // cin >> text ; // for reading a word 
//     cin.getline(text,100); // for reading the whole line 

//     for (int i=0 ; i<strlen(text); i++) {
//         if (text[i]=='e') {
//             c++ ;
//         }
//     }
//     cout << "nombre de e est : "<< c << endl;
//     return 0;
// }

// 2 Eme methode 

// int main() {
//       int c =0 ;
//      char text[100], *p ;
//      cout << "entrer votre text" << endl ;
//      cin.getline(text,100); // for reading the whole line 
//      cout << text ;
//      p = text ;
//      do {
//         p= strchr(p,'e');
//         if (p!=NULL) {
//           c++ ;
//           p++ ;
//         }
//      } while(p!=NULL);
//      cout << "nombre de e est : "<< c << endl;
//     return 0;
// }

// b  

// int main() {
//      char text[100],*p ;
//      cout << "entrer votre text" << endl ;
//      cin.getline(text,100); 
//      cout << text ;
//       p = text ;
//     do {
//        p= strchr(p,'o');
//          if (p!=NULL) {
//           strcpy(p , p+1);
//          }
//     } while(p!=NULL);
//     cout << "nombre de e est : "<< text << endl;
//     return 0;
// }


// c

int main() {

   char text[100];
   cout << "enter le text " << endl;
   cin.getline(text,100);
   cout << text ;
    int j  =  0 ;
   for ( int i = strlen(text)-1 ; i>=0 ; i++ ) {
      char c ;
      c = text[j];
      text[j] = text[i] ;
      text[i]= c;
      j++ ;
   }
   cout << text << endl ;
   return 0 ;
}