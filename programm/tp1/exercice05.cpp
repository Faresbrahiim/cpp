#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, del, s1, s2;
    cout << "Enter values for a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0 && b != 0) {
        s1 = -c / b;
        cout << "Solution is: " << s1 << endl;
    } else if (a == 0 && b == 0) {
        cout << "No solution ." << endl;
    } else {
        
        del = b * b - 4 * a * c;
        if (del < 0) {
            cout << "No real solution ." << endl;
        } else if (del == 0) {
            s1 = -b / (2 * a);
            cout << "Single solution is: " << s1 << endl;
        } else {
            s1 = (-b + sqrt(del)) / (2 * a);
            s2 = (-b - sqrt(del)) / (2 * a);
            cout << "Two solutions are: " << s1 << " and " << s2 << endl;
        }
    }
    return 0;
}
