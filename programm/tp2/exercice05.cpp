 #include <iostream>
using namespace std;

// Bubble sort
int main() {
    int *T, *start1, *start2, n, temp;

    // Input array size
    cout << "Enter the size of the array: ";
    cin >> n;

    // Dynamically allocate the array
    T = new int[n];

    // Fill the array
    for (start1 = T; start1 < T + n; start1++) {
        cout << "t[" << start1 - T << "] = ";
        cin >> *start1;
    }

    // Display the original array
    cout << "The original array is:" << endl;
    for (start1 = T; start1 < T + n; start1++) {
        cout << "t[" << start1 - T << "] = " << *start1 << endl;
    }

    // Bubble sort: sort the array in ascending order
    // we fix first element and we campare it with  other element  checking the condions ,,, 
    // when the condition is verified we applicatred swaping to  order the array 
   for (start1 = T; start1 < T + n - 1; start1++) {
    for (start2 = T; start2 < T + n - 1 ; start2++) {
        if (*start2 > *(start2 + 1)) { // Swap if needed
            temp = *start2;
            *start2 = *(start2 + 1);
            *(start2 + 1) = temp;
        }
    }
   }

    // Display the sorted array
    cout << "The sorted array is:" << endl;
    for (start1 = T; start1 < T + n; start1++) {
        cout << "t[" << start1 - T << "] = " << *start1 << endl;
    }

    // Free dynamically allocated memory
    delete[] T;

    return 0;
}
