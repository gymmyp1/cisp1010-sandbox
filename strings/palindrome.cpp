//detect if user enters a palindrome or not

#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    string reverse;
    
    // Ask the user to enter a word
    cout << "Enter a word: ";
    cin >> word;

    // Convert the word to lowercase (optional)
    for (int i=0;i<word.length();i++) {
        word[i] = tolower(word[i]);
    }

    int cur = 0;
    // Check for palindrome by building the string backwards
    for (int i = word.length()-1; i >= 0 ; i--) {
        reverse += word[i];  
    }
    
    // Print result
    if (word == reverse) {
        cout << word << " is a palindrome!" << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }

    return 0;
}
