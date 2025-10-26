/* Examples of how to manipulate c-strings*/

#include <iostream>
#include <cstring> //to use strcat

using namespace std;

bool isVowel(char c);

int main()
{
    char w1[10]; //C strings
    char w2[10];


    cout << "Enter a word: ";
    cin >> w1;

    cout << "Enter another word: ";
    cin >> w2;
    
    //print length of each word
    cout << "Length of word 1: " << strlen(w1) << endl;
    cout << "Length of word 2: " << strlen(w2) << endl;

    strcat(w1,w2); //append w2 to the end of w1
    cout <<  w1  << endl;

   //print out each letter of w1
    for(int i=0;i<strlen(w1);i++) {
        cout << w1[i] << endl;
    }
    
    //check if there are any numbers in w2
    for(int i=0;i<strlen(w2);i++) {
        if( isdigit(w2[i])) {
            cout << "letter " << i + 1 << " is a number." << endl;
        }
    }

    string new_w1;
    
    //construct a new string by replacing all vowels with z in w1
    for(int i=0;i<strlen(w1);i++) {
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