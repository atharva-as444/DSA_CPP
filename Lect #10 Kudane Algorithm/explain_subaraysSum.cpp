#include <iostream>
#include <climits>
#include <vector>

using namespace std;
int main() {
    // Example array  
    vector<int> arr = {2, -1, 3, -4, 5};
    int n = arr.size();
/* 2-1= 1+3 =4 -4=0+5 =5* =5*/ 
    int maxSum = INT_MIN; // biggest sum found till now

    // i = starting point of subarray
    for (int i = 0; i < n; i++) {
        int currentSum = 0; // sum for this subarray

        // j = ending point of subarray
        for (int j = i; j < n; j++) {
            currentSum += arr[j]; // keep adding numbers
            maxSum = max(maxSum, currentSum); // update biggest sum if needed
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum << endl;
    return 0;
}


