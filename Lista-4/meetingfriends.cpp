#include <iostream>

using namespace std;

int main () {

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int arr[3] = {x1, x2, x3};

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3 - i - 1; j++) {

            if (arr [j] > arr [j + 1]) {
                int temp = arr [j];
                arr [j] = arr [j + 1];
                arr [j + 1] = temp;
            }
        }
    }

    int distance = arr [2] - arr [0];

    cout << distance;


    return 0;
}