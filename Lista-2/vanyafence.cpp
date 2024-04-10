#include <iostream>

using namespace std;

int main () {

    int n, height;
    cin >> n >> height;

    int friends_heights[1000];

    for (int i = 0; i < n; i++)
        cin >> friends_heights[i];
    
    int minimum_width = 0;

    for (int i = 0; i < n; i++) {
        
        minimum_width++;

        if (friends_heights[i] > height)
            minimum_width += 1;
    } 

    cout << minimum_width;

    return 0;
}