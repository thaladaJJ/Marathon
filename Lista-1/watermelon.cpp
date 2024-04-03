#include <iostream>

using namespace std;

int main () {

    int watermelon_weight;
    cin >> watermelon_weight;

    bool isPartsEven = false;

    for (int i = 2; i <= watermelon_weight; i += 2) {

        int aux = i;

        while (aux < watermelon_weight) {

            aux += 2;

            int sum = aux;

            if (sum < watermelon_weight)
                sum += i;
            
            if (sum == watermelon_weight) {
                isPartsEven = true;
                break;
            }

        }   

    }

    isPartsEven ? cout << "YES" : cout << "NO";

    return 0;
}