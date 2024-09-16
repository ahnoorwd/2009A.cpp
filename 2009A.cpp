
#include <iostream>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        // The minimum value of (c - a) + (b - c) is simply (b - a)
        cout << b - a << endl;
    }

    return 0;
}
