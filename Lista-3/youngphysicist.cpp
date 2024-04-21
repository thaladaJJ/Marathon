#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    int x = 0, y = 0, z = 0;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < 3; j++) {

            int value;
            cin >> value;

            if (j == 0)
                x += value;

            else if (j == 1)
                y += value;

            else if (j == 2)
                z += value;
        }
    }

    if (x == 0 && y == 0 && z == 0)
        cout << "YES";

    else
        cout << "NO";

    return 0;
}