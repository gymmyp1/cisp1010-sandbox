#include <iostream>
using namespace std;

// Function prototypes
void displayArray(const int arr[], int numElements);
void bubbleSort(int arr[], int numElements);
int linearSearch(const int arr[], int numElements, int key);
int getMin(const int arr[], int numElements);
int getMax(const int arr[], int numElements);

int main() {
    const int MAX_SIZE = 10;
    int numbers[MAX_SIZE];
    int numElements = 0;
    int value;

    cout << "Enter up to " << MAX_SIZE << " integers (enter -999 to stop early):\n";

    for (int i = 0; i < MAX_SIZE; ++i) {
        cout << "Enter integer #" << (i + 1) << ": ";
        cin >> value;

        // Input validation
        while (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter an integer: ";
            cin >> value;
        }

        if (value == -999)
            break;

        numbers[numElements++] = value;
    }

    cout << "\nYou entered: ";
    displayArray(numbers, numElements);

    cout << "Minimum value: " << getMin(numbers, numElements) << endl;
    cout << "Maximum value: " << getMax(numbers, numElements) << endl;

    bubbleSort(numbers, numElements);
    cout << "\nAfter bubble sort: ";
    displayArray(numbers, numElements);

    int key;
    cout << "\nEnter a number to search for: ";
    cin >> key;

    int index = linearSearch(numbers, numElements, key);
    if (index != -1)
        cout << "Value " << key << " found at index " << index << ".\n";
    else
        cout << "Value " << key << " not found in the array.\n";

    return 0;
}

// Function definitions

void displayArray(const int arr[], int numElements) {
    for (int i = 0; i < numElements; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void bubbleSort(int arr[], int numElements) {
    bool swapped;
    for (int i = 0; i < numElements - 1; ++i) {
        swapped = false;
        for (int j = 0; j < numElements - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int linearSearch(const int arr[], int numElements, int key) {
    for (int i = 0; i < numElements; ++i) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int getMin(const int arr[], int num
