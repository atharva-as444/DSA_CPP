#include <iostream>
using namespace std;

bool isPowerofTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerofTwo(num)) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is not a power of 2." << endl;
    }

    return 0;
}