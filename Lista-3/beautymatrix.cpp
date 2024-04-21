#include <iostream>

using namespace std;

int main() {

    int matrix[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cin >> matrix[i][j];
    }

    int moves = 0;

    int positionX = -1, positionY = -1;
    
    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {

            if (matrix[i][j] == 1) {
                positionX = i;
                positionY = j;
                break;
            }

        }
    }

    moves += abs(2 - positionX);
    moves += abs(2 - positionY);

    cout << moves;

    return 0;
}
