// same as grades.cpp, but separated out into functions
#include <iostream>
using namespace std;

// Function to calculate the sum of grades
double calculateSum(double grades[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return sum;
}

// Function to calculate the average of grades
double calculateAverage(double grades[], int size) {
    double sum = calculateSum(grades, size);
    return sum / size;
}

int main() {
    const int NUM_STUDENTS = 5;
    double grades[NUM_STUDENTS];

    // Input grades
    cout << "Enter " << NUM_STUDENTS << " grades:\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cin >> grades[i];
    }

    // Print sum
    double total = calculateSum(grades, NUM_STUDENTS);
    cout << "Sum of grades: " << total << endl;

    // Print average
    double avg = calculateAverage(grades, NUM_STUDENTS);
    cout << "Average grade: " << avg << endl;

    return 0;
}
