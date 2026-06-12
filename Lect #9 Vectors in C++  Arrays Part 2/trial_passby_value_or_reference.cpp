#include <iostream>
#include <vector>
using namespace std;

void byValue(vector<int> arr) {
    arr[0] = 99; // sirf copy change hogi
}

void byReference(vector<int>& arr) {
    arr[0] = 99; // original change hoga
}

int main() {
    vector<int> v = {1,2,3};

    byValue(v);
    cout << "After byValue: " << v[0] << endl; // output: 1 (original safe)

    byReference(v);
    cout << "After byReference: " << v[0] << endl; // output: 99 (original modified)
}
