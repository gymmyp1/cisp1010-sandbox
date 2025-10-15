#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // setw(): set field width
    // Sets the minimum width for the next output value.
    // If the value is shorter, it’s padded (by default, with spaces).
    cout << setw(10) << 42 << endl;          // right-aligned by default
    cout << setw(10) << "Hello" << endl;

    //setfill(): change the fill character
    // Used with setw() to change what character is used for padding.
    cout << setfill('-') << setw(10) << 42 << endl;
    cout << setfill('*') << setw(10) << "Hi" << endl;

    //left and right: control text justification
    // Used to left- or right-align text within the field width.
    cout << left << setw(10) << "Left" << "|\n";
    cout << right << setw(10) << "Right" << "|\n";

    // Combining them
    cout << left  << setfill('.') << setw(12) << "Name"
         << right << setfill(' ') << setw(6) << "Age" << endl;

    cout << left  << setfill('.') << setw(12) << "Alice"
         << right << setfill(' ') << setw(6) << 23 << endl;

    cout << left  << setfill('.') << setw(12) << "Bob"
         << right << setfill(' ') << setw(6) << 31 << endl;
    return 0;
}