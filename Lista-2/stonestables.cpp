#include <iostream>

using namespace std;

int main () {

    int n;
    string colors;

    cin >> n;
    cin >> colors;

    string colors_clean;
    colors_clean.resize (n, ' ');

    int num_removes = 0;

    for (int i = 0; i < n; i++) {
    
        if (colors[i] != ' ')
            colors_clean[i] = colors[i];

        for (int j = i + 1; colors [j] == colors_clean [i]; j++) {
            colors [j] = ' ';
        }

    }

    for (char color : colors) {
        if (color == ' ')
        num_removes++;
    }

    cout << num_removes;
 
    return 0;
}