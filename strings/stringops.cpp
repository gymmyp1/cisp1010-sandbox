/* show various things you can do to manipulate C++ strings */

#include <iostream>
#include <string> //to use string type
#include <cstring> //to use strcat

using namespace std;

bool isVowel(char c);

int main()
{
    string w1; //C++ strings
    string w2;

	cout << "Enter a word: ";
    cin >> w1;

    cout << "Enter another word: ";
    cin >> w2;

    //print length of each word
    cout << "Length of word 1: " << w1.length() << endl;
    cout << "Length of word 2: " << w2.length() << endl;

    cout << w1+w2 << endl;

    //print out each letter of w1
    for(int i=0;i<w1.length();i++) {
        cout << w1[i] << endl;
    }
    
    //check if there are any numbers in w2
    for(int i=0;i<w2.length();i++) {
        if( isdigit(w2[i])) {
            cout << "letter " << i + 1 << " is a number." << endl;
        }
    }

    string new_w1;
    
    //construct a new string by replacing all vowels with z in w1
    for(int i=0;i<w1.length();i++) {
        if( isVowel(w1[i])) {
            new_w1 += 'z';
        } else {
            new_w1 += w1[i];
        }
    }

    cout << "After replacing all vowels in w1 with z: " << new_w1 << endl;

	return 0;
}
	
bool isVowel(char c) {
    char u = toupper(c);
    if(u == 'A' || u == 'E' || u == 'I' || u == 'O' || u == 'U') {
        return true;
    }
        
    return false;
}