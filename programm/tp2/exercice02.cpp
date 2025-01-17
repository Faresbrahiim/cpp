#include <iostream>
using namespace std;

int main() {
    int x, *T, *start, n;
    //  size of the array 
    cout << "Enter n: ";
    cin >> n;
    // element we want to delete 
    cout << "Enter x: ";
    cin >> x;

    // Dynamically allocate memory for the array
    T = new int[n];

    // Input values for the array
    cout << "Enter values for the array:" << endl;
    for (start = T; start < T + n; start++) {
        cout << "T[" << start - T << "] = ";
        cin >> *start;
    }

    // Filter values not equal to x
    int *pj = T;
    for (start = T; start < T + n; start++) {
        if (*start != x) {
            *pj = *start; // Copy the value if it doesn't match x
            pj++;
        }
    }
     
    // Update the size of the array after filtering
    n = pj - T;

    // Output the filtered array
    cout << "Filtered array (excluding " << x << "):" << endl;
    for (start = T; start < T + n; start++) {
        cout << *start << endl;
    }

    // Free the allocated memory
    delete[] T;

    return 0;
}
