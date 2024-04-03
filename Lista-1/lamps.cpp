#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    bool lamp_A, lamp_B;

    int input = 0;

    for (int i = 0; i < n; i++) {
        cin >> input;

        if (input == 1)
            lamp_A = !lamp_A;

        else if (input == 2) {
            lamp_A = !lamp_A;
            lamp_B = !lamp_B; 
        }
    }

    lamp_A ? cout << 1 : cout << 0;
    cout << "\n";

    lamp_B ? cout << 1 : cout << 0;
    cout << "\n";

    return 0;
}