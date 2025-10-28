#include <iostream>
using namespace std;

int main() {
    const int NUM_STUDENTS = 5;
    double grades[NUM_STUDENTS];

    cout << "Enter 5 grades:\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cin >> grades[i];
    }

    double total = 0;
    for (int i = 0; i < NUM_STUDENTS; i++)
        total += grades[i];

    cout << "Average grade: " << total / NUM_STUDENTS << endl;
}
