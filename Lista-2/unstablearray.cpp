#include <iostream>

using namespace std;

int main () {

    int test_cases;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {

        int lenght, sum;
        cin >> lenght >> sum;

        if (lenght == 1)
            cout << "0\n";
        
        else if (lenght == 2)
            cout << sum << "\n";
        
        else
            cout << sum * 2 << "\n";

    }

    return 0;
}