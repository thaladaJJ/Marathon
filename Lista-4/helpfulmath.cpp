#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int>& v) {

    for (int i = 0; i < v.size(); i++) {

        int i_menor = i;

        for (int j = i + 1; j < v.size(); j++)
            if (v[j] < v[i_menor])
                i_menor = j;

        int aux = v[i];
        v[i] = v[i_menor];
        v[i_menor] = aux;
    }
}

int main() {

    string input;
    cin >> input;

    vector<int> numbers;

    for (int i = 0; i < input.size(); i++) {

        if (input[i] >= '1' && input[i] <= '9') {

            int number = input[i] - '0';
            numbers.push_back(number);
        }
    }

    sort(numbers);

    for (int i = 0; i < numbers.size(); i++) {

        cout << numbers[i];

        if (i < numbers.size() - 1)
            cout << "+";
    }

    return 0;
}