#include <iostream>
using namespace std;

int main() {
    int *pa, *pb, *start1, *start2, n, m;

    // Input sizes n and m
    cout << "Enter n and m: ";
    cin >> n >> m;

    // Dynamically allocate arrays
    pa = new int[n + m];  // Array `pa` to hold n + m elements
    pb = new int[m];      // Array `pb` to hold m elements

    // Input values for the first array `pa`
    cout << "Enter values for the first array:" << endl;
    for (start1 = pa; start1 < pa + n; start1++) {
        cout << "t[" << start1 - pa << "] = ";
        cin >> *start1;
    }

    // Display the values of the first array `pa`
    cout << "This is your first array (pa):" << endl;
    for (start1 = pa; start1 < pa + n; start1++) {
        cout << "t[" << start1 - pa << "] = " << *start1 << endl;
    }

    // Input values for the second array `pb`
    cout << "Enter values for the second array:" << endl;
    for (start2 = pb; start2 < pb + m; start2++) {
        cout << "t[" << start2 - pb << "] = ";
        cin >> *start2;
    }

    // Display the values of the second array `pb`
    cout << "This is your second array (pb):" << endl;
    for (start2 = pb; start2 < pb + m; start2++) {
        cout << "t[" << start2 - pb << "] = " << *start2 << endl;
    }

    // Append `pb` to `pa`
    for (start1 = pa + n, start2 = pb; start2 < pb + m; start1++, start2++) {
        *start1 = *start2;  // Copy values from `pb` to `pa`
    }

    // Display the combined array `pa`
    cout << "This is the combined array (pa):" << endl;
    for (start1 = pa; start1 < pa + n + m; start1++) {
        cout << "t[" << start1 - pa << "] = " << *start1 << endl;
    }

    // Free dynamically allocated memory
    delete[] pa;
    delete[] pb;

    return 0;
}
