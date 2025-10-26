//detect if user enters a palindrome or not using c-strings

#include <iostream>
#include <cstring> // to use strlen()
#include <cctype>

using namespace std;

const int MAX_WORD_SIZE = 30;

int main() {
    char word[MAX_WORD_SIZE];
    char reverse[MAX_WORD_SIZE];
    
    // Ask the user to enter a word
    cout << "Enter a word: ";
    cin >> word;

    // Convert the word to lowercase (optional)
    for (int i=0;i<strlen(word);i++) {
        word[i] = tolower(word[i]);
    }

    int cur = 0;
    // Check for palindrome by building the string backwards
    for (int i = strlen(word)-1, cur = 0; i >= 0 ; i--, cur++) {
        reverse[cur] = word[i];
    }
    
    // Print result
    if (strcmp(word, reverse) == 0) {
        cout << word << " is a palindrome!" << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }

    return 0;
}
