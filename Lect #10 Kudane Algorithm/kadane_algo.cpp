#include <iostream>
#include <climits>
#include <vector>

using namespace std;
int main() {
    // Example array  
     int arr []= {2, -1, 3, -4, 5};     
    int n = 5;

    int maxSum = INT_MIN; // biggest sum found till now
    int currSum = 0;
    // i = starting point of subarray
    for (int i = 0; i < n; i++) {
        currSum += arr[i];
        
        maxSum=max(maxSum,currSum);

        if (currSum < 0){
            currSum = 0;
        }


    }
/*+ + = +
- + = +
+ - = negative */

        
    cout << "Maximum Subarray Sum = " << maxSum << endl;
    return 0;
}





