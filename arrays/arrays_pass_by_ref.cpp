//arrays are passed by reference, so this program shows passing an array
// to a function, the function modifies the array, and 
// the changes to the array made w/in the function persist

#include <iostream>
using namespace std;

// Function prototype
void doubleValues(int arr[], int size);

int main() {
    const int SIZE = 5;
    int numbers[SIZE] = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int i = 0; i < SIZE; i++)
        cout << numbers[i] << " ";
    cout << endl;

    // Pass array to function
    doubleValues(numbers, SIZE);

    cout << "After calling doubleValues(): ";
    for (int i = 0; i < SIZE; i++)
        cout << numbers[i] << " ";
    cout << endl;

    return 0;
}

// Function that doubles each element
void doubleValues(int arr[], int size) {
    for (int i = 0; i < size; i++)
        arr[i] *= 2;  // modifies the original array
}
