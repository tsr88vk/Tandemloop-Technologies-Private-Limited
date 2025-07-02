#include <iostream>
using namespace std;

void output (int a){
    for (int i = 1; i <= a; i++) {
        cout << 2 * i - 1;
        if (i != a) {
            cout << ", ";
        }
    }
    cout << endl;
}

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;
    output(a);
    return 0;
}
