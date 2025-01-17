#include <iostream>
using namespace std;
// we can check the positive value using do while loop ,,, 
//there is no need to check 0 since it wont enter loop
// we have to considered that  the float value wont pass the intrvall [-2pui(31)  2pui(31)-1]
// factoriel in this case wont give the exact value if we give it 13! 
// we can change int  by long int  and long
int forloop(int a) {
    int i, fact = 1;  
    for (i = 1; i <= a; i++) {
        fact *= i; 
    }
    return fact; 
}

int whileloop(int a) {
    int i = 1; 
    int fact = 1;
    while (i <= a) { 
        fact *= i;
        i++;
    }
    return fact;
}

int dowhileloop(int a) {
    int i = 1; 
    int fact = 1;
    do {
        fact *= i; 
        i++; 
    } while (i <= a); 
    return fact;
}
int main(int argc, char* *argv) {
    int number; 
    cout << "number is: "; 
    cin >> number; 
    

    int resultForLoop = forloop(number);
    cout << "result from forloop is: " << resultForLoop << endl; 
    
    
    int resultWhileLoop = whileloop(number);
    cout << "result from whileloop is: " << resultWhileLoop << endl;

    int resultDoWhileLoop = dowhileloop(number);
    cout << "result from dowhileloop is: " << resultDoWhileLoop << endl;  
    
    return 0; 
}
