#include <iostream>

using namespace std;

int main () {

    int n;
    int matrix_views[1000][3];

    cin >> n;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < 3; j++)
            cin >> matrix_views [i] [j];
    }

    int problems_solved = 0;

    for (int i = 0; i < n; i++) {

        int agreements = 0;

        for (int j = 0; j < 3; j++) {

            if (matrix_views [i] [j] == 1)
                agreements += 1;
        }

        if (agreements >= 2)
            problems_solved++;
    }

    cout << problems_solved;

    return 0;
}