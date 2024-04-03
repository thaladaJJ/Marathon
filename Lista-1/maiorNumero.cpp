#include <iostream>

using namespace std;

int main () {

    int maiorNumero = 0;
    int number = -1;

    while (number != 0) {
        cin >> number;

        if (number > maiorNumero)
            maiorNumero = number;
    }

    cout << maiorNumero;

    return 0;
}