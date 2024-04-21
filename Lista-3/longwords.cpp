#include <iostream>
 
using namespace std;
 
int main () {
 
    int n;
    cin >> n;
 
    string word;
 
    for (int i = 0; i < n; i++) {
 
        cin >> word;
        int length = word.length();
 
        if (length <= 10) {
            cout << word << "\n";
            continue;
        }
        
        char abreviation [length];
        int count = 0;
 
        for (int i = 0; i < length; i++) {
 
            if (i == 0 || i == length - 1)
                abreviation [i] = word [i];
            
            else
                count++; 
 
        }
 
        int numDigitos;
 
        if (count < 10)
            numDigitos = 1;
 
        else if (count >= 10 && count < 100)
            numDigitos = 2;
        
        else
            numDigitos = 3;
 
        char numberChars[numDigitos];
 
        for (int i = 0; count > 0; i++) {
 
            int digito = count % 10;
            count /= 10;
 
            numberChars [i] = digito + '0';
 
        }
 
        int k = numDigitos - 1;
 
        for (int i = 1; i < length - 1; i++) {
 
            abreviation [i] = numberChars [k];
            k--;
 
        }
        
        abreviation[numDigitos + 1] = word[length - 1];
        abreviation[numDigitos + 2] = '\0';
        
        cout << abreviation << "\n";
 
    }
 
 
    return 0;
}