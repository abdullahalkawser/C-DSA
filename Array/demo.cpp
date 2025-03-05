#include <iostream>
using namespace std;

int main() {
    int arr[5];

    // Taking input
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Printing output
    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//Multidimensional Arrays

int matrix[3][3]; // 3x3 matrix


// Initializing a 2D Array
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

// Accessing Elements in a 2D Array
cout << matrix[1][2];  // Outputs 6
