#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++) {

        string operation;
        cin >> operation;

        if (operation[1] == '+')
            count++;
        else
            count--;
    }    

    cout << count;

    return 0;
}