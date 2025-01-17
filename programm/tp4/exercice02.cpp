#include<iostream>
#include<cstring>
using namespace std;

int main(){
  char sjt[6][11]= {"je","tu","il/elle","nous","vous","ils/elles"} ;
  char tem[6][4]= {"e","es","e","ons","ez","ent"};
  char verb[20];
  char radical[20] ;
  do {
   cout << "enter  un verbe du 1 ere grp " << endl ;
   cin >> verb ;
  } while (strcmp(verb + strlen(verb)-2 , "er")!=0);
  // we can also use the condition ==> verb[strlen(verb)-2]!='e' || verb[strlen(verb)-1]!='r' 
  strncpy(radical, verb , strlen(verb)-2);
  cout << "conjug de verb au present " << verb ;
  for (int i=0 ; i<6 ; i++) {
  cout << sjt[i] << radical << tem[i] << endl ;
  }
  return 0 ;
}