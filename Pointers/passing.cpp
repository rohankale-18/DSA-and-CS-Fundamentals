#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to pass array as reference
void passArrayByReference(vector<int> (&arr)) {
    // Modify array elements
    for (int i = 0; i < 5; i++) {
        arr[i] += 10;
    }
}

// Function to pass array as value
void passArrayByValue(vector<int> arr) {
    // Modify array elements
    for (int i = 0; i < 5; i++) {
        arr[i] += 5;
    }
}

int main() {
    vector<int> arr= {1, 2, 3, 4, 5};

    // Pass array as reference
    passArrayByReference(arr);

    // Print array elements after passing as reference
    cout << "Array after passing by reference: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Pass array as value
    passArrayByValue(arr);

    // Print array elements after passing as value
    cout << "Array after passing by value: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
