#include <iostream>
using namespace std;

int main() {
    int *p1, n, temp, *start1, *start2;

    // Prompt for the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Dynamically allocate the array
    p1 = new int[n];

    // Fill the array
    for (start1 = p1; start1 < p1 + n; start1++) {
        cout << "t[" << start1 - p1 << "] = ";
        cin >> *start1;
    }

    // Display the original array
    cout << "Original array:" << endl;
    for (start1 = p1; start1 < p1 + n; start1++) {
        cout << "t[" << start1 - p1 << "] = " << *start1 << endl;
    }

    // Reverse the array
    for (start1 = p1, start2 = p1 + n - 1; start1 < start2; start1++, start2--) {
        temp = *start1;
        *start1 = *start2;
        *start2 = temp;
    }

    // Display the reversed array
    cout << "Reversed array:" << endl;
    for (start1 = p1; start1 < p1 + n; start1++) {
        cout << "t[" << start1 - p1 << "] = " << *start1 << endl;
    }

    // Free dynamically allocated memory
    delete[] p1;

    return 0;
}
