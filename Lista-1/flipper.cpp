#include <iostream>

using namespace std;

int main () {

    int p_position, r_position;
    cin >> p_position >> r_position;
    
    char current_road = 'A';
    
    if (p_position == 0)
        current_road = 'C';

    else if (p_position == 1)
        r_position == 0 ? current_road = 'B' : current_road = 'A';

    cout << current_road;

    return 0;
}