#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string fortunes[] = {
        "You will ace your next exam!",
        "A mysterious bug will appear in your code.",
        "Your coffee will be perfectly brewed today.",
        "Someone will appreciate your indentation style."
    };

    srand(time(0));
    int index = rand() % 4;

    cout << "🥠 Your fortune: " << fortunes[index] << endl;
}
