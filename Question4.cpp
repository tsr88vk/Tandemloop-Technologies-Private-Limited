#include <iostream>
#include <vector>
#include <map>
using namespace std;

void countMultiples(const vector<int>& numbers) {
    map<int, int> result;
    for (int i = 1; i <= 9; i++) {
        result[i] = 0;
    }
    for (int i = 1; i <= 9; i++) {
        for (int num : numbers) {
            if (num % i == 0) {
                result[i]++;
            }
        }
    }
    cout << "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << result[i];
        if (i != 9) cout << ", ";
    }
    cout << "}" << endl;
}

int main() {
    vector<int> input = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    countMultiples(input);
    return 0;
}
