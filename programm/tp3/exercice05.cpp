#include <iostream>
using namespace std;
int Ackermann(const int &m , const int &n ) ;

int Ackermann(const int &m, const  int &n) {
    if (m == 0) {
        return n + 1; // condition d'arret
    } else if (n == 0) {
        return Ackermann(m - 1, 1); 
    } else {
        return Ackermann(m - 1, Ackermann(m, n - 1)); 
    }
}

int main() {
    int m, n;

    cout << "Enter values for m and n: ";
    cin >> m >> n;

    cout << "Ackermann(" << m << ", " << n << ") = " << Ackermann(m, n) << endl;

    return 0;
}
