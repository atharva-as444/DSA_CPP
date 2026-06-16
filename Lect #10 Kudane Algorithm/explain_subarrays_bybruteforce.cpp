#include <iostream>
using namespace std;

int main() {
    // Example array with 5 elements
    int arr[5] = {10, 20, 30, 40, 50};

    int n = 5; // number of elements in array

    // Outer loop: starting index of subarray
    for (int start = 0; start < n; start++) {


        // Inner loop: ending index of subarray
        for (int end = start; end < n; end++) {


            for (int k = start; k <= end; k++) {
                cout << arr[k] << " "; // print each element
            }

            cout<<" ";
        }

        cout << endl; // move to next line for next starting element
    }
    
    return 0;
}


/*
---------------- DRY RUN EXPLANATION ----------------

Array = {10, 20, 30, 40, 50}
n = 5

Outer loop start = 0 → arr[0] = 10
    Subarrays: [10] [10 20] [10 20 30] [10 20 30 40] [10 20 30 40 50]

Outer loop start = 1 → arr[1] = 20
    Subarrays: [20] [20 30] [20 30 40] [20 30 40 50]

Outer loop start = 2 → arr[2] = 30
    Subarrays: [30] [30 40] [30 40 50]

Outer loop start = 3 → arr[3] = 40
    Subarrays: [40] [40 50]

Outer loop start = 4 → arr[4] = 50
    Subarrays: [50]

-----------------------------------------------------
*/
