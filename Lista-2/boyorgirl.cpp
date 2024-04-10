#include <iostream>

using namespace std;

int main () {

    string username;
    cin >> username;

    char alphabetic [127];

    for (int i = 97; i < 123; i++) {
        alphabetic [i] = ' ';
    }

    int distinctChars = 0;

    for (char letter : username) {
        
        if (alphabetic [letter] == ' ') {
            alphabetic [letter] = letter;
            distinctChars++;
        }   
    }

    if (distinctChars % 2 == 0)
        cout << "CHAT WITH HER!";
    
    else
        cout << "IGNORE HIM!";

    return 0;
}