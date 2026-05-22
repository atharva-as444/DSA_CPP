#include<iostream>
using namespace std;

bool primenoCheck(int n) {
    if(n <= 1) return false; // 0 and 1 are not prime

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false; // not prime
        }
    }
    return true; // prime
}

int main() {
    int num = 11;
    if(primenoCheck(num)) {
        cout << num << " is a prime number.";
    } else {
        cout << num << " is not a prime number.";
    }
    return 0;
}


